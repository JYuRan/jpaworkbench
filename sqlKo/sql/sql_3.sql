-- null : 값을 잃어버린 상태
-- undefined : 아무것도 이루어지지 않은 상태, 초기상태
-- null point exiception : 자주 보게 될 오류, 
-- null safer 지정하면 널값이 올 떄 에러 뜸 (개발단계에서 오류 발견 가능)
-- ifnull <- null값이 있는지를 체크 **중요함수**
-- ' '공백과 0 과 null은 다 다름

create table kmong.salary(
	name		varchar(20),
	dept		char(1),
	salary		int
);
use kmong;
select * from kmong.salary;
drop table salary;

insert into kmong.salary
values("손흥민", "A", 3000),
	  ("안정환", "B", 2000),
      ("박지성", "C", null);

select
	name, dept, salary
from
	kmong.salary;

select 
	name, dept, salary, ifnull(salary, '해당없음') as `null => 0`
from
	kmong.salary;

select name, dept, salary
from kmong.salary
where salary is null;

/*
	인라인 if()를 이용한 실수형급여 구하기
*/ 
select 
	name, dept, salary, if(salary is null, '해당없음', salary * 0.9) as `이번달 실수령 금액`
from
	kmong.salary;

/*
	case : 인라인 switch문
*/ 
select name,
	case when dept = 'A' then '토트넘'
		 when dept = 'B' then '감독'
		 else '휴식중' end as dept,
         
         if(salary is null,'급여없음', salary*0.9) as '실급여'
from kmong.salary;

select 
	name,
	case when dept = 'A' then '토트넘'
		 when dept = 'B' then '감독'
		 when dept = 'C' then '휴식중' 
	end as dept,
	salary,
	if(salary >= 3000, '고액연봉', '일반')as salary_type,
	ifnull(salary,0) as '월급',
	case when ifnull(salary, 0) = 0 then '연봉없음'
		 when ifnull(salary, 0) != 0 then (salary*0.9) 
         end as '실수령액'
from kmong.salary;


/*
	기술적통계량(기계적통계량) count, sum, avg, max, min,stddev,variance
    복수행함수, 단일행 함수와는 다르게 한번에 여러 데이터에 대한 결과를 출력하는 함수(여러개 합 구함 등)
*/
select name, ifnull(salary,0), avg(ifnull(salary,0)), sum(salary), min(salary), count(name)
from kmong.salary;

create table kmong.salary(
	name 	varchar(20),
    dept	char(1),
    salary	int,
    bonus int
);

insert into kmong.salary 
	values('박지성','A',100,200),
		  ('차두리','A',200,400),
          ('홍길동','B',300,null),
          ('손흥민','B',150,null),
          ('피카추','C',1000,200);
  
-- null이 없는 프로그래밍 좋은 프로그램
-- 스토어 프로시저
select 
	avg(bonus), avg(ifnull(bonus,0)), count(*), count(bonus), -- *은 널값 포함
	sum(salary), sum(bonus), avg(salary), max(salary), min(salary),
    stddev(salary), -- stddev: 표준편차/ 표준편차는 뺄셈이라 음수에 취약함/
    variance(salary) -- variance:분산/ 표준편차의 약점 보완
from 
	kmong.salary;
    
    
    
# 예산테이블 만들기
create table kmong.budget(
	do 			 varchar (100) null comment '광역행정구역', -- comment 적극 활용하는것이 좋음
    city		 varchar (100) null	comment '시',
    budget_value int null comment '예산',
    population	 int null comment '인구'
);
select * from kmong.budget;
drop table budget;
INSERT INTO budget (do, city, budget_value, population) 
	VALUES ('서울특별시', '서울특별시', 23324, 345),
		   ('부산광역시', '부산광역시', 34323, 5345),
		   ('경상남도', '창원시', 4331, 435),
		   ('경상남도', '양산시', 25436, 2134),
		   ('경상남도', '밀양시', 62341, 6523),
		   ('경기도', '부천시', 3242, 345),
		   ('경기도', '시흥시', 32454, 546),
		   ('경기도', '수원시', 3234, 345),
		   ('충청남도', '공주시', 2425, 436),
		   ('충청남도', '논산시', 5534, 4567),
		   ('강원도', '속초시', 6542, 3542),
		   ('강원도', '강릉시', 23423, 4355),
		   ('강원도', '태백시', 5465, 45),
		   ('전라북도', '전주시', 456, 645),
		   ('전라북도', '군산시', 3243, 234);

select count(*)
from kmong.budget;

select do, format(budget_value,0)
from kmong.budget;

select do, format(avg(budget_value),0) as 예산평균, sum(budget_value) as 예산합계
from kmong.budget
group by do;					# 도를 기준으로 묶는다

select if(do in ('서울특별시','경기도'),'수도권', '지방') as 지역구분, 
	   format(avg(budget_value),0) as 예산평균,
	   format(sum(budget_value),0) as 예산합계
from kmong.budget
group by if(do in ('서울특별시','경기도'),'수도권', '지방');

/*
select
where

group by
having
order by
limit
*/
select if(do ='부산광역시', '부산','그외') as 지역구분
		, avg(budget_value) as 예산평균
        , sum(budget_value) as 예산합계
from kmong.budget
group by if(do ='부산광역시', '부산','그외');
