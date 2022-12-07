/*
	사용자가 만든 객체 - 참조자료형
    
*/
create table kmong.primary_key_exam(
	jumin_no char(14) primary key not null,
    name varchar(10),
    gender_cd varchar(2),
    sido int
);

insert into kmong.primary_key_exam
	values('900102-1009865','손흥민',null,11000),
		  ('870321-1679876','알리',null,27000),
          ('821005-1444536','차범근',null,36110);
          
select * from kmong.primary_key_exam;

update kmong.primary_key_exam 
set jumin_no = '870321-1679876'
where name = '알리'; 

create table kmong.users (
	name varchar(50) not null,
    age int check(age >= 0 and age <150)
);
insert into kmong.users (name, age) 
	values ('하나',20),
		   ('둘',30),
           ('셋',50),
           ('넷',51),
           ('다섯',100);
           
select * from kmong.users;

drop table board.dept;

create table kmong.dept(
	deptno		int,
    dname		varchar(14),
    loc			varchar(13),
    constraint	pk_dept primary key (deptno) -- pk_dept에 순서.... 정렬할때 사용
);

use kmong;
select * from kmong.dept;




