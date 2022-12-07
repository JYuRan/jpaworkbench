use erp;
select * from erp.dept;
select * from erp.emp;

# 10. emp테이블 이름이 너무 잛습니다. 알기쉽게 별명을 붙여주세요
#	  sal, com컬럼이 무슨 의미인지 모르겠습니다. 알려주세요
select 
	sal as '급여', 
    comm as '보너스'
from
	`erp`.`emp` as `사원테이블`;

# 11. 인라인 뷰를 이용한 별칭사용가능 여부
#	  1) 급여와 보너스 뷰를 얻어서, 1)결과에 추가로 급여가 5000 미만인 직원을 구하시오
select 
	ename as '이름',
	sal as '급여', 
    comm as '보너스'
from
	`erp`.`emp` as `사원테이블`
where
	sal < 5000;

select * 
from 
	(select 
		ename as '이름',
		sal as '급여', 
		comm as '보너스'
	from emp)
where salary < 5000;

### select 검색명령어는
# 1) from부터 실행
# 2) where싱행
# 3) select 다음 순서부터 실행

# 11. "오 나라님은 매니저"
#     "강 바람님은 부장"
#	  "정 바다님은 사원" 식으로 출력을 하려고 합니다.
#	   emp(사원테이블) 테이블은 ename, job 이 컬럼이 결합

select ename, job, concat(ename,"님은....",job) as mag
from emp
where deptno = 10;

# 12. 사원이 2000미만의 급여를 받으면 저임금
#	  사원이 4000이상의 임금을 받으면 '고임금'
##
(select *
from emp
where sal < 2000);

(select *
from emp
where sal >= 4000);

(select *
from emp
where sal between 2000 and 4000);
select sal	
from emp
group by sal;

# 12. 사원이 2000미만의 급여를 받으면 저임금
#	  사원이 4000이상의 임금을 받으면 '고임금'
#	  중간에 있으면 "연봉OK"

# case when 
select ename, sal,
	case when sal < 2000 then '저임금'
		 when sal >= 4000 then '고임금'
         else '연봉OK'
	end as stats
from emp;
#13. 검색결과로부터 5개만 읽어오기
-- 반환 갯수 제한, 오라클 lownum, mysql limit, sql sever pop
select ename, sal,
	case when sal < 2000 then '저임금'
		 when sal >= 4000 then '고임금'
         else '연봉OK'
	end as stats
from emp
limit 5;

# 14. 랜덤하게 5개에 데이터를 가져와라
#	  rand() 난수 함수 
select ename, job
from emp
order by rand() limit 5;

select ename, job
from emp
order by rand() limit 5;

select *
from emp
where comm is not null;

#15. 특정 열에 값이 null인 모든 행을 찾아라
select * from emp where comm is null;

# 16. null이 포함된 행에서 null이 아닌값을 찾아라
select ename, sal, coalesce(comm, 0) -- null인 경우 0으로 변환
from emp;
	
    # 비슷한 방법
	select case
			 when comm is not null then comm
			 else 0						-- null이면 0으로 변환
		   end
	from emp;       

# 17. 부서번호가 10번 또는 20번
#	  사원이름 'I'가 들어간 경우
# 	  job칼럼 데이터 끝에 'ER'
select ename, job
from emp
where (deptno in(10,20)) and
	  (ename like "%I%" or
      job like "%ER");







