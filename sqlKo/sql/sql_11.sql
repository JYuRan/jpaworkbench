create schema erp;
use erp;

create table erp.dept(
	deptno		int,
    dname		varchar(14),
    loc			varchar(13),
    primary key (deptno)
    -- pk_dept에 순서.... 정렬할때 사용
    -- primary key가 int형이므로 정렬되어있는 상태, 그러므로 찾기 쉬움
    -- primary key index의 한 종류, 정렬되어있음/ not null / 
);

create table erp.emp(
	empno		int,
    ename		varchar(10),
    job			varchar(9),
    mgr			int,
    hiredate	date,
    sal			float,
    comm		float,
    deptno		int,
    primary key (empno),
    foreign key (deptno) references dept (deptno)
    
);

/* Statement 3. DEPT 테이블에 행을 삽입 */
insert into DEPT (DEPTNO, DNAME, LOC)
values(10, 'ACCOUNTING', 'NEW YORK');

insert into DEPT 
values(20, 'RESEARCH', 'DALLAS');

insert into DEPT 
values(30, 'SALES', 'CHICAGO'); 

insert into DEPT 
values(40, 'OPERATIONS', 'BOSTON');
-- ----
use erp;
/* Statement 4. 
DATE_FORMAT 함수를 사용하여 EMP 행 삽입 */

select date_format('1981-11-11','%Y-%m-%d') from dual;

insert into emp  
values(  
 7839, 'KING', 'PRESIDENT', null,  
 date_format('1981-11-17','%Y-%m-%d'),  
 5000, null, 10  
);


insert into emp  
values(  
 7698, 'BLAKE', 'MANAGER', 7839,  
 DATE_FORMAT('1981-5-1','%Y-%m-%d'),  
 2850, null, 30  
);


insert into emp  
values(  
 7782, 'CLARK', 'MANAGER', 7839,  
 DATE_FORMAT('1981-6-9','%Y-%m-%d'),  
 2450, null, 10  
);

insert into emp  
values(  
 7566, 'JONES', 'MANAGER', 7839,  
 DATE_FORMAT('1981-4-2','%Y-%m-%d'),  
 2975, null, 20  
);


insert into emp  
values(  
 7788, 'SCOTT', 'ANALYST', 7566,  
 DATE_FORMAT('1981-7-13','%Y-%m-%d'),  
 3000, null, 20  
);

insert into emp  
values(  
 7902, 'FORD', 'ANALYST', 7566,  
 DATE_FORMAT('1981-12-3','%Y-%m-%d'),  
 3000, null, 20  
);


insert into emp  
values(  
 7369, 'SMITH', 'CLERK', 7902,  
 DATE_FORMAT('1980-12-17','%Y-%m-%d'),  
 800, null, 20  
);

insert into emp  
values(  
 7499, 'ALLEN', 'SALESMAN', 7698,  
 DATE_FORMAT('1981-2-1','%Y-%m-%d'),  
 1600, 300, 30  
);

insert into emp  
values(  
 7521, 'WARD', 'SALESMAN', 7698,  
 DATE_FORMAT('1981-2-22','%Y-%m-%d'),  
 1250, 500, 30  
);

insert into emp  
values(  
 7654, 'MARTIN', 'SALESMAN', 7698,  
 DATE_FORMAT('1981-9-28','%Y-%m-%d'),  
 1250, 1400, 30  
);

insert into emp  
values(  
 7844, 'TURNER', 'SALESMAN', 7698,  
 DATE_FORMAT('1981-9-8','%Y-%m-%d'),  
 1500, 0, 30  
);

insert into emp  
values(  
 7876, 'ADAMS', 'CLERK', 7788,  
 DATE_FORMAT('1987-7-13', '%Y-%m-%d'),  
 1100, null, 20  
);

insert into emp  
values(  
 7900, 'JAMES', 'CLERK', 7698,  
 DATE_FORMAT('1981-12-3','%Y-%m-%d'),  
 950, null, 30  
);

insert into emp  
values(  
 7934, 'MILLER', 'CLERK', 7782,  
 DATE_FORMAT('1982-1-23','%Y-%m-%d'),  
 1300, null, 10  
);

select * from erp.emp;