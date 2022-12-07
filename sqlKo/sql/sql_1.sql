CREATE TABLE My_table(
my_field1 INT,
my_field2 varchar(50),
my_filed3 date not null,
primary key (my_field1, my_field2)
);

use My_table;
ALTER TABLE My_table_rename ADD my_field4 int(3) NOT NULL;

alter table My_table RENAME to My_table_rename;
truncate table My_table_rename;
select *
from My_table_rename;
drop table My_table_rename;

create table temp(
id int null
);

select *
from board.temp;

insert into temp (id) values
(1),
(2),
(3),
(4),
(5);
update board.temp set id = 10
where id >= 5;	-- 5 이상인 것 다 10으로 변경
update board.temp set id = 10
where id >= 5 or 1 = 1; -- 5이상이거나 1 = 1이면 10으로 변경(무조건 참)

truncate table temp;
desc user; -- 테이블구조 보는법


create database kmong;
use kmong;
create table `kmong`.`select_test`(
	name 	varchar(50),
    dept_cd varchar(1),
    phone	varchar(15),
    address varchar(100)
) character set utf8; -- 만들때 utf스키마로 만들었다면 안적어도 됨
select *
from kmong.select_test;
desc select_test;

insert into kmong.select_test(name, dept_cd,phone,address) 
values('홍길동','A', '01023456789','조선 한양읍'),
	  ('손흥민','A', '0112345434','영국 런던'),
      ('박찬호','C', '01023433456','충남 공주'),
      ('김유신','D', '0187766645','신라 경주'),
      ('박나래','D', '0192929384','서울특별시 영등포구'),
      ('강감찬','E', '01023432123','고려');
      
select name,phone
from kmong.select_test
where dept_cd = 'D';  

select name as 이름, '님 안녕하세요!!' as 인사문구
from kmong.select_test;

select distinct dept_cd
from kmong.select_test;

select concat(name, '의 부서코드는 ', dept_cd,'입니다.') as concat
from kmong.select_test
where name = '김유신';
select concat(name, '은 고려의 장군입니다.') as concat
from kmong.select_test
where name = '강감찬';

create table kmong.exam_result
(
name varchar(50),
math int(10),
english int(10),
korean int(10)
)character set utf8;

insert into kmong.exam_result (name, math, english, korean) 
values ('호날두', 98,65,56),
	   ('메시', 87,76,87),
       ('치차리토', 76,87,75),
       ('살라', 78,88,55),
       ('라모스', 56,90,89),
       ('모드리치', 90,95,78),
       ('케인', 99,82,83);
       
select 
	name,math,english,korean, format((math+english+korean)/3,0) as total
from 
	kmong.exam_result;
 
select 
	name,math,english,korean, format((math+english+korean)/3,0) as total
from 
	kmong.exam_result
where 
	korean>= 80
order by 
	korean asc;
    
select 
	name,math,english,korean, format((math+english+korean)/3,0) as total
from 
	kmong.exam_result
where 
	(math+english+korean)/3>= 80
order by 
	total desc, math desc;
    
select 
	name,math,english,korean, format((math+english+korean)/3,0) as total
from 
	kmong.exam_result
where 
	(math+english+korean)/3>= 50 and format((math+english+korean)/3,0) != 88
order by 
	math desc;
    
select 
	name,math,english,korean, format((math+english+korean)/3,2) as total
from 
	kmong.exam_result
where 
	(math+english+korean)/3>= 80 
order by 
	(math+english+korean)/3 desc;
    
select 
	name,math,english,korean, format((math+english+korean)/3,2) as total
from 
	kmong.exam_result
where 
	(math+english+korean)/3>= 80 
order by 
	3;

create table kmong.exam_result_2(
name	varchar (50),
math	int (10),
english	int (10),
korean	int (10)
);

insert into kmong.exam_result_2 
values('차범근', 78,90,78),
	  ('서정원', 68,99,68),
      ('고종수', 84,96,98),
      ('박지성', 67,68,75),
      ('최순호', 88,93,68);

select *, concat(count(*),'개') as count
from kmong.exam_result;

select *	-- select로 만들어내는 결과 -> view
from kmong.exam_result
union all
select *
from kmong.exam_result;

create table korean_student
(
name		varchar(50),
student_no  varchar(10)
);

insert into korean_student 
values('조단','111'),
	  ('호나우두','112'),
      ('조현우','201'),
      ('루이스','202');
      
select distinct A.name, A.student_no, B.name, B.student_no
from math_student A
inner join korean_student B
on A.name = B.name;

select *
from math_student;
select *
from korean_student;

select distinct math_student.*, korean_student.*
from math_student
	korean_student
inner join korean_student
on 
	math_student.student_no = 
    korean_student.student_no;

drop table korean_student;
-- inner join B : 테이블 A와 테이블 B를 공통된 컬럼을 통해서 연결하겠다.
# on : 두 테이블의 공통된 컬럼을 연결한 조건 대부분 제일 많이 사용하는 조건은 =(같다)
# num이 같은 것만 뽑아냄
SELECT
	m.*,
    k.*
FROM
	math_student AS m
INNER JOIN
	korean_student AS k
ON 
	m.student_no = k.student_no
WHERE
	m.student_no = '111';

# 차집합 3가지, join/not in/not exists
# 테이블 A - 테이블 B = 테이블 A만 있는 데이터
# 테이블 A - 교집합
-- 왼쪽것 기준으로 오른쪽의 곂치는 부분 출력, 
-- 오른쪽에서 null인 부분을 고르면 차집합을 구할 수 있음(곂치는 부분 제외)
-- mysql에서는 full outer join 없음, 대신 union으로 left join, right join을 합해주면 만들 
SELECT 
	m.*,
    k.*
FROM
	math_student AS m
LEFT JOIN
	korean_student AS k
ON 
	m.student_no = k.student_no
WHERE
	 k.student_no IS NULL;
     
SELECT 
	m.*
FROM
	math_student AS m
WHERE
	 m.student_no NOT IN (
     SELECT DISTINCT
		k.student_no
	 FROM
		korean_student AS k
         -- k의 student_no이 아닌 것(m 차집합)
     );

SELECT 
	m.*
FROM
	math_student AS m
WHERE NOT exists (	-- 교집합 안에 있으면 출력해라, inner join이 정식 표준표현/ 이런건 방언
     SELECT DISTINCT	-- 문장 안의 문장 -> 서브쿼리라고 함
		k.student_no
	 FROM
		korean_student AS k
	 WHERE 
		k.student_no = m.student_no
        -- 번호가 서로 곂치는(같은) k no 
     );
	
create table kmong.country(
	country_name varchar(100),
	country_city varchar(100),
    continent varchar(100)
);
insert into kmong.country
values('USA', 'Washington','Amer'),
	  ('England', 'London','Europ'),
      ('S.korea', 'Seoul','Asia'),
      ('Australia', 'Canberra','Oceania'),
      ('Ghana', 'Accra','Africa'),
      ('Argentina', 'Buenos aires','America');
      
select *
from kmong.country;

select country_name as 원본, lower(country_name) as 소문자,upper(country_name) as 대문자
from kmong.country;

select country_name, length(country_name) as 길이
from kmong.country;

select '안녕하세요', length('안녕하세요') as 길이 from kmong.country;
select '안녕하세요 hello', length('안녕하세요 hello') as 길이 from kmong.country;
select '안 녕 하 세 요', length('안 녕 하 세 요') as 길이 from kmong.country;
select '※※※※※※', length('※※※※※※') as 길이 from kmong.country;

select continent as 원본, substr(continent,3,1) as substr, mid(continent,3,3) as mid, substring(continent,3,5) as substring from kmong.country;

update kmong.country
set continent = 'America'
where continent = 'Amer';

-- instr 대소문자 구분 안함, 찾을 문자 위치값 반환
select continent as 원본, instr(continent,'A') as instr
from kmong.country;

-- 모두 10자리로 만들어준다
select continent as 원본, lpad(continent, 10,'_') as lpad,rpad(continent, 10,'A') as rpad
from kmong.country;

select "     안녕하세요     " as 원본, 
	   lpad("     안녕하세요     ", 16,'_') as lpad,
       rpad("     안녕하세요     ", 16,'_') as rpad
from kmong.country;

-- trim 공백을 제거해라, 
select "     안녕하세요     " as 원본, 
	   trim("     안녕하세요     ") as trim,
       ltrim("     안녕하세요     ") as ltrim,
       rtrim("     안녕하세요     ") as rtrim
from kmong.country;

-- replace : 치환해주는 역할
select continent as 원본, replace(continent, 'A','@') as 'replace'
from kmong.country;

-- --------------------5 숫자관련 함수
-- dual 간단한 테스트 용도로 쓸 경우 dual 해놓으면 됨
-- round 반올림 함수
select round(112.3456,1),round(112.3456,2),round(112.3456,-1)
from dual;
-- truncate 버림 함수
select truncate(112.3456,1),truncate(112.3456,2),truncate(112.3456,-1)
from dual;
-- mod : 나머지 함수(%)
select mod(26,3),mod(10,9),mod(4,2)
from dual;

-- ceil : 올림
select ceil(12.6),ceil(11.5),ceil(16.3)
from dual;
-- floor : 나머지 함수(%)
select floor(12.6),floor(11.5),floor(16.3)
from dual;

-- power : 제곱
select power(12,2),format(power(1000,2),0),power(2,3)
from dual;
-- --------------------------------- 

-- ---------------------------------6 시계열 함수
select now();
select sysdate();
select current_timestamp();
select current_date();
select current_time();

select substr(current_date()+0,1,4),
	   concat(hour(now()),'시 ',minute(now()),'분') as 시간,
	   week(now()) as 주;

-- 날짜 추가
select date_add('2022-12-31 23:59:59',interval 3 second);
select date_add('2022-12-31 23:59:59',interval 1 day);
select date_add(now(),interval 3 month);
-- 1분 1초 추가
select date_add('2022-12-31 23:59:59',interval '1:1' minute_second);
-- 하루와 17시간 빼서 출력
select date_add('2022-12-31 23:59:59',interval '-1 17' day_hour);

-- 초를 시간으로 변환 
select sec_to_time(3000);
-- 초로 변환 
select time_to_sec('20:21:30');
select sec_to_time(300000);
select (select time_to_sec('00:08:19')*300000)/(3600*24);
select time_to_sec('00:08:19')*300000;
select sec_to_time(time_to_sec('00:08:19'));
select sec_to_time(300000*(select time_to_sec('8:19')));

select period_add(2001,15); -- 2020 01 + 15개월
select period_add(202001,15);

select date_format('2020-01-01 16:59:09','%p'); -- 오전오후 출력
select date_format('2020-01-01 16:59:09','%w'); -- 요일 출력
select date_format('2020-01-01 16:59:09','%u'); -- 주차 출력
select date_format('2020-01-01 16:59:09','%a'); -- 요일약어 출력

SELECT DATE_FORMAT('2020-01-01 16:59:09', '%r'); -- 시각(12) 출력
SELECT DATE_FORMAT('2020-01-01 16:59:09', '%T'); -- 시각(24) 출력
select date_format('2020-01-01 16:59:09','%k'); -- 시 출력
select date_format('2020-01-01 16:59:09','%i'); -- 분 출력



-- -------------------7 형변환
select '100' + '200' from dual; -- 묵시적 형변환
select concat(82,'는 대한민국 국가 식별 전화번호') from dual;

-- CAST ( 표현할 값 AS 데이터 형식[(길이)] ); -- 주로 사용함
-- CONVERT ( 표현할 값 , 데이터 형식[(길이)] ); -- 함수형식으로 사용하기 편함
select cast(100 as char) as '숫자->문자', 
	   lpad(convert('100', signed),30," ") as '문자->숫자'
from dual;
select cast('2016-08-25 03:30:00' as datetime) from dual;




create table T
(C integer primary key,
D integer);

create table S
(B integer primary key,
C integer references T(C) on delete cascade);

create table R
(A integer primary key,
B integer references S(B) on delete set null);


select * from R;
insert board.T values(1,1),
					 (2,1);
                     
insert board.S values(1,1),
					 (2,1);

insert board.R values(1,1),
					 (2,1);
delete from T;
drop table board.S;


