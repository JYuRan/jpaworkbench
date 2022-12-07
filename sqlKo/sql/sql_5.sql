select * from kmong.major;
select * from kmong.student;

select 
	s.name as 학생이름, p.name as 교수이름, m.major_title as 학과명
from 
	kmong.student s
    inner join 
		kmong.major m
	inner join 
		kmong.professor p
    on 
		s.bl_prfs_id = p.prfs_id
        and
        p.bl_major_id = m.major_id;

select 
	s.name as 학생이름, p.name as 교수이름, m.major_title as 학과명
from
	kmong.student s
		inner join kmong.professor p
		inner join kmong.major m
			on s.bl_prfs_id = p.prfs_id
				and p.bl_major_id = m.major_id;
    
create table kmong.customer
(
	name varchar(10),
    point int
);
create table kmong.gift(
	name varchar(20) null,
    point_s int null,
    point_e int null
);

insert into kmong.customer
	values('조성모',5),
		  ('이기찬',12),
          ('이소라',14),
          ('서태지',18),
          ('박효신',21),
          ('김정민',16),
          ('양파',9),
          ('깅수지',22),
          ('강타',24);

insert into kmong.gift
	values('공기청정기',11,15),
		  ('아이폰11',21,55),
          ('로봇청소기',6,10),
          ('상품권',1,5),
          ('스마트패드',16,20);
          
select * from kmong.customer;
select * from kmong.gift;

# 고객이 소지한 포인트로 얻을 수 있는 상품 이름 알기
select 
	  c.name as 고객명
    , c.point as 고객_point 
    , g.name as 상품명
from 
	kmong.customer c
	inner join 
		kmong.gift g
		on 
			c.point 
				between g.point_s and g.point_e;


select 
	  c.name as 고객명
    , c.point as 고객_point 
    , g.name as 상품명
from 
	kmong.customer as c,
    kmong.gift as g
where 
	c.point
		between g.point_s and g.point_e;
        
        
-- var -> let
-- jquery -> vanila java script
-- 객체 생성 const dog ={참조자료형}