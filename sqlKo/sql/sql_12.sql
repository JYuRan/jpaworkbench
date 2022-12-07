select 
	* 
from 
	erp.emp
limit 50;
    
# 2. 부서번호 20 출력
select 
	* 
from 
	dept
where 
	deptno = 20;
# 3. 부서번호가 20인 직원 출력
select 
	*
from
	erp.emp
where
	deptno = 20;
    
# 4. 부서번호가 20인 사원의 수 구하기
select 
	count(*)
from
	erp.emp
where
	deptno = 20;
    
# 5. 최고월급과 최저월급
select 
	max(sal) as 최고월급, 
    min(sal) as 최저월급, 
    max(sal) - min(sal) as 월급차이,
    format(avg(sal),0) as 평균월급
from
	erp.emp;

# 6. 월급 2000불 이상, 부서번호 20 평균월급
select 
    *
from
	erp.emp
where 
	deptno = 20
    and sal>=2000;

# 7. 부서번호가 10 이거나
#	 월급이 2000불 이하 and 부서번호 20인 경우
select 
    *
from
	erp.emp
where 
	deptno = 10 
    or deptno = 20
    and sal>=2000;

select * from erp.emp;   
# 8. 부서번호 10번이거나 
#	 커미션 받는 사원이거나 (null이 아니다 => is null)
#	 월급 2000불 이하 부서번호 20경우
select 
    *
from
	erp.emp
where 
	deptno = 10 or
    comm is not null or 
    (sal<=2000 and deptno = 20);
    
# 9. 부서번호 10 또는 20번이고
#	 커미션 받는 사원이거나
#	 월급 2000불 이하
select 
    *
from
	erp.emp
where 
	deptno in (10, 20) or
    (comm is not null and sal<=2000); 
    
    
    
    
    
    
    
    
    