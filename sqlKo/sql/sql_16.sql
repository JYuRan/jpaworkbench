###
# 연습 3단계
#		실제 제일 많이 이용하는 예
#			데이터 생성

## 3.1 어떤 결과레코드셋 다른 결과물을 합치는 예 (union)
##		1) 사원테이블(emp) 부서번호 10번인 사원명 부서번호 보고를 하나
##		2) 부서테이블(dept) 부서명과 부서번호

# 1) SQL + "구분역할 테이블" + 2) SQL 결과
select ename as '프로잭트_참여_사원및_참여부서', deptno as '부서번호'
from emp
where deptno = 10 
union all

select "_________________", "#####"
from dual
union all

select dname, deptno
from dept;

## union union all 비교
# union : 중복된 값을 제거
select 
	emp.deptno
from 
	emp
union
select
	dept.deptno
from
	dept;
# union all : 중복된 경우 포함
select 
	emp.deptno
from 
	emp
union all
select
	dept.deptno
from
	dept;

## union all + distinct의 결합
## 한 테이블의 중복 결합
select distinct
	emp.deptno
from 
	emp union all
select
	dept.deptno
from
	dept;

# union all 결과 레코드셋에 distinct를 사용한 결합
# union all 이 인라인뷰(미니테이블) 이 테이블을 제거하라
# 
SELECT distinct
	deptno
FROM(select
		emp.deptno
	from 
		emp union all
	select
		dept.deptno
	from
		dept) X











