# select 결과를 검색하고 그 결과를 정렬하는 내용
# 2.1 10번 부서에 속한 사원들의 정보를 출력합니다.
#	  출력순서 : 사원이름, 직책, 급여(오름차순)
select ename, job, sal
from emp
where deptno = 10
order by sal asc;





