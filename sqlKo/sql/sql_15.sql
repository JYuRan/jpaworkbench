# select 결과를 검색하고 그 결과를 정렬하는 내용
# 2.1 10번 부서에 속한 사원들의 정보를 출력합니다.
#	  출력순서 : ename(사원이름), job(직책), sal급여(오름차순)
	select ename, job, sal
	from emp
	where deptno = 10
	order by sal asc;

	# 비슷한 표현
	select ename, job, sal
	from emp
	where deptno = 10
	order by 3 asc;

# 2.2 ename(사원이름), job(직책) 컬럼을 반환하려고 하는데,
#	  job열의 마지막 두글자를 기준으로 정렬하세요.
#	  SQL에서 데이터의 크기
#	  1234567890123
#	  *************
	select ename as 사원이름 , job as 직책
    from emp
    order by substr(job,length(job) - 1);
   -- order by substr(job,-2);

# 2.3 특정열에 null값들이 들어있습니다. 
# 	  null이 아닌 값들을 먼저 정렬
#	  나머지 null 값들을 정렬 출력
#     오름차순으로 정렬 하는 경우와 내림차순으로 정렬하는 경우	 
# 인라인 뷰를 이용하여 정렬할 레코드셋을 얻으시고
# 그 뷰에 null인 값을 정렬하시면 된다.
#
# 이 문제에서는 null이 많이 있는 comm컬럼을 기준으로 정렬
# comm컬럼에 null비교를 할 수 있는 값으로 변경을 합니다.
# null은 0으로 설정 is not null은 1로 설정하는 컬럼을 추가합니다.
# comm null comm_is_null 0
# comm 300 comm_is null 1

# comm 필드를 정렬할 수 있는 결과물(레코드셋, 데아처셋)이 인라인뷰(이 친구의 정체는 미니테이블)를 X
select ename, sal, comm,
	case when comm is null then 0 -- comm이 null 이면 0, 아니면 1
	else 1 
    end as `comm_is null`
from emp
order by `comm_is null`;

# comm 필드를 정렬할 수 있는 결과물(레코드셋 = 데이터셋)이 인라인뷰(이 친구의 정체는 미니 테이블) X
select ename, sal, comm
from 
	(select 	
		ename, 
		sal, 
		comm,
		case 
			when 
				comm is null then 0 
			else 
				1 
			end as `comm_is null`
		from 
			emp) as X
order by
	comm_is_null desc, comm;

## 2.4 job컬럼의 값이 'SALEMAN'이면 comm컬럼을 기준으로 정렬을 하고
## 	   아니면 sal컬럼을 기준으로 정렬하세요
## 	   출력하는 컬럼은 ename, sal, job, comm
##	   정렬기준이 job = 'SALESMAN'인 경우 'comm'을
##	   그 외에는 sal로 정렬
-- 조건절에도 정렬을 쓸 수있음
SELECT ename, sal, job, comm
FROM emp
ORDER BY 
	CASE
		WHEN 
			job = 'SALESMAN' THEN comm
		ELSE 
			sal
    END





