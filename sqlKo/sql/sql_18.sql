create table `erp`.`customer`(
	customer_id 	int not null comment '고객 ID',
    customer_name 	varchar(45) not null comment '고객 이름',
    birthday		date comment '고객 생년월일',
    membertype_id	tinyint comment	'고객 회원 타입'			-- 0-127까지 저장가능한 id
);

create table `erp`.`membert`(
	membertype_id 	int comment '회원타입 id',
    membertype 		varchar(5) comment '회원타입명'
);

create table `erp`.`product`(
	product_id 		int comment '상품 id',
    product_name 	varchar(20) comment '상품명',
	stock			int comment '재고수',
    price			decimal(10.0) comment '단가'
);

create table `erp`.`productorder`(
	order_id 		int comment '주문 id',
    customer_id 	int comment '고객 id',
    product_id 		int comment '상품 id',
	quantity		int comment '주문 수',
    price			decimal(10.0) comment '주문',
	order_time		datetime comment '주문일시'
);

select * from productorder;

insert into membert values(1, '보통 회원'),(2, '일반 회원');
insert into product values(1, '약용 입룍제',100,70),
						  (2, '약용 핸드솝',23,700),
                          (3, '천연 아로마 입욕제',4,120),
                          (4, '거품 목욕제',23,120);
                          
insert into customer values(1, '김바람','1984-06-24',2),
						   (2, '이구름','1990-07-16',1),
                           (3, '박하늘','1976-03-09',2),
                           (4, '강산','1991-05-04',1),
                           (5, '김바람','1993-04-21',2);
select * from productorder;
insert into productorder values(1, 4, 1, 12, 840, '2019-10-13 12:01:34'),
							   (2, 5, 3, 5, 600, '2019-10-13 18:11:05'),
                               (3, 2, 2, 2, 1400, '2019-10-14 10:43:54'),
                               (4, 3, 2, 1, 700, '2019-10-15 23:15:09'),
                               (5, 1, 4, 3, 360, '2019-10-15 23:37:11'),
                               (6, 5, 2, 1, 700, '2019-10-16 01:23:28'),
                               (7, 1, 5, 2, 300, '2019-10-18 12:42:50');

# product 테이블 내용 가져오기
select 
	*
from 
	product;

#
create table ex(
	member_id	int,
	member_name varchar(20),
	birthday	date,
	tel			varchar(13)
);









