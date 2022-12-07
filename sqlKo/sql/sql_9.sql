create table insert_test
(
	seq int(10) primary key ,
	cont text,
	name varchar(15),
	tel_num int(11),
	input_date datetime
);
drop table insert_test;
use kmong;
select * from kmong.insert_test;
insert into kmong.insert_test 
	values (1,'대한민국은 코로나를 잘 극복 하고 있습니다.', '홍길동', 01012345678, now());

create table insert_test2 as select * from insert_test where 1=2; -- 데이터는 안 옮겨짐
create table insert_test3 as select * from insert_test where 1=1; -- 데이터도 옮겨짐 참인 데이터 옮겨라
insert into kmong.insert_test select * from kmong.insert_test2; -- test, test2 구조가 같다는 가정 하에 하는 것, 다를 경우 select로 맞추어줘야함

delete from kmong.insert_test
where seq in (select seq 
			  from kmong.insert_test3);

select * from kmong.insert_test2;
create table kmong.insert_test
(
seq int(10) not null
primary key,
cont text null,
name varchar(15) null,
tel_num int null,
input_date datetime null
);
INSERT INTO kmong.insert_test (seq, cont, name, tel_num, input_date) VALUES (1, '대한민국은 코로나를
잘 극복 하고 있습니다.', '홍길동', 1012345678, '2020-05-15 14:35:10');
INSERT INTO kmong.insert_test (seq, cont, name, tel_num, input_date) VALUES (2, '대한민국은 코로나를
잘 극복 하고 있습니다.', '홍길동', 1012345678, '2020-05-15 14:35:10');
INSERT INTO kmong.insert_test (seq, cont, name, tel_num, input_date) VALUES (3, '대한민국은 코로나를
잘 극복 하고 있습니다.', '홍길동', 1012345678, '2020-05-15 14:35:10');
INSERT INTO kmong.insert_test (seq, cont, name, tel_num, input_date) VALUES (4, '대한민국은 코로나를
잘 극복 하고 있습니다.', '홍길동', 1012345678, '2020-05-15 14:35:10');
INSERT INTO kmong.insert_test (seq, cont, name, tel_num, input_date) VALUES (5, '대한민국은 코로나를
잘 극복 하고 있습니다.', '홍길동', 1012345678, '2020-05-15 14:35:10');              
              
create table kmong.insert_test2
(
seq int(10) not null,
cont text null,
name varchar(15) null,
tel_num int null,
input_date datetime null
);
INSERT INTO kmong.insert_test2 (seq, cont, name, tel_num, input_date) VALUES (4, '사회적 거리두기를
 잘 실천 합시다!', '손흥민', 1012345678, '2020-02-01 12:32:22');
INSERT INTO kmong.insert_test2 (seq, cont, name, tel_num, input_date) VALUES (5, '사회적 거리두기를
 잘 실천 합시다!', '손흥민', 1012345678, '2020-02-01 12:32:22');
INSERT INTO kmong.insert_test2 (seq, cont, name, tel_num, input_date) VALUES (6, '사회적 거리두기를
 잘 실천 합시다!', '손흥민', 1012345678, '2020-02-01 12:32:22');
INSERT INTO kmong.insert_test2 (seq, cont, name, tel_num, input_date) VALUES (7, '사회적 거리두기를
 잘 실천 합시다!', '손흥민', 1012345678, '2020-02-01 12:32:22');

drop table kmong.insert_test2;
use kmong;
select * from kmong.insert_test;


-- 테이블 복사
insert into insert_test
select *
from insert_test2 b
on duplicate key update cont			= b.cont,
						name			= b.name,
                        tel_num			= b.tel_num,
                        input_date		= now();

-- 추가 및 덮어쓰기
insert into insert_test
values (2, '사회적 거리두기를 실천 합시다.','손흥민',1012345678, now())
on duplicate key update cont = '사회적 거리두기를 실천 합시다.',
						name = '손흥민',
                        tel_num = 1012345678,
                        input_date = now();
 
 create table kmong.mozi(
	C1 int,
    C2 varchar(1)
 );

select * from kmong.mozi;
insert into kmong.mozi 
	values (1,'A'),
           (10,'B'),
           (3,'C'),
           (4,'A'),
           (3,'D'),
           (3,'A');

select *
from kmong.vw_mozi ;                        

create view vw_mozi as
	select c1
	from kmong.mozi 
	where C1 = 3 and C2 = 'A';     








 