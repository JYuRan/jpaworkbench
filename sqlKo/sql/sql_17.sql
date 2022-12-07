# 3.2. emp테이블과 dept테이블을 deptno기준으로 조인합니다
#	   deptno = 10인 사원들의 이름과 지역을 출력하세요
select * from erp.dept;
select * from emp;
use erp;

select 
	e.ename, d.loc
from emp e, dept d
where 
	e.deptno = d.deptno and 
    e.deptno = 10;

-- ansi sql문으로 변경(inner join)
select 
	e.ename, d.loc
from 
	emp e 
    inner join dept d
	on e.deptno = d.deptno 
where 
	e.deptno = 10;
    
# 3.3. 사원테이블에는 없고 부서테이블에만 있는 부서코드를 구하시오
select
	*
from 
	dept
where 
	deptno not in(select deptno from emp);

# 4.1 새로운 레코드 추가하기
#	  dept테이블에 부서번호 50 부서이름 'PROGRAMING' 지역은 'BALTMORE'를 추가하세요.
insert into erp.dept (deptno,dname,loc)
	values(50,'PROGRAMING','BALTMORE');

# 4.2 새로운 레코드 추가하기
#	  dept테이블에 부서번호 60 부서이름 'DESIGN' 지역은 'LA'
#				 부서번호 70 부서이름 'TEST' 지역은 'DENVOR' 
#				 부서번호 80 부서이름 'DATABASE' 지역은 'LASVEGAS'추가하세요.
insert into erp.dept (deptno,dname,loc)
	values(60,'PROGRAMING','BALTMORE'),
		  (70,'TEST','DENVOR'),
          (80,'DATABASE','LASVEGAS');

select * from dept;
-- 테이블 복사
create table dept2 like dept;
-- 테이블 구조만 복사
create table dept3 as
	select * from dept where 1 = 0;

select deptno, ename, sal from emp
where deptno = 20
order by deptno, sal;

-- deptno 20인 사원 sal 10% 증가
update emp
set sal = sal * 1.10
where deptno = 20;

select
	deptno, 
    ename, 
    sal as '원래급여',
    sal * 0.1 as '급여증가분',
    sal * 1.1 as '새급여'
from 
	emp
where
	deptno = 20
order by
	deptno, '새급여';

update emp
set sal = sal * 1.20
where deptno 
	in(select deptno 
	   from dept 
       where deptno = 10 or deptno = 20);

delete from emp where deptno = 10;

create table dupes(
	id integer,
    name varchar(10)
);

insert into dupes 
	values(1,'NAPOLEON'),
		  (2,'DYNAMITE'),
          (3,'DYNAMITE'),
          (4,'SHE SELLS'),
          (5,'SHE SELLS'),
          (6,'SHE SELLS'),
          (7,'SHE SELLS');
          
select distinct name from dupes order by 1;        

delete 
from dupes 
where id not in
	(select min(id)
    from (select id, name from dupes) tmp group by name);

select * from dupes;

drop table dupes;

select name, min(id)
from dupes
group by name;

(select min(id)
    from (select id, name from dupes) tmp group by name);














    
