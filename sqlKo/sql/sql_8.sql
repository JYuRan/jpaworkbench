create table hero_collection(
	idx int auto_increment primary key not null,
    type int,
    name varchar(50)
);
use kmong;
select * from kmong.hero_collection;
insert into kmong.hero_collection (type,name)
	values(1, "윤봉길"),
		  (2, "김유신"),
          (2, "이순신"),
          (3, "이성계"),
          (3, "왕건"),
          (4, "반갑수");

-- type별로 그룹화
select 
	type, count(name) as 'name의 개수'
from 
	kmong.hero_collection
group by 
	type;

-- type 1초과인 type 그룹화
select 
	type, count(name) as 'name의 개수'
from 
	kmong.hero_collection
where 
	type > 1
group by 
	type;

-- type 그룹화하여 name 갯수를 가져온 후, 그 중에 갯수가 2개 이상인 데이터 조회 (조
-- 건 처리 후에 컬럼 그룹화 후에 조건 처리)

select 
	type, count(name)
from 
	kmong.hero_collection
group by 
	type
having 
	count(name)>=2;
    
-- type 1 초과인, type 그룹화하여 name 갯수를 가져온 후, 그 중에 갯수가 2개 이상
-- 인 데이터 조회 (조건 처리 후에 컬럼 그룹화 후에 조건 처리)
select 
	type, count(name)
from 
	kmong.hero_collection
where 
	type>1
group by 
	type
having 
	count(name)>=2
order by 
	type desc;
    
select 
	count(distinct type)
from 
	kmong.hero_collection;

