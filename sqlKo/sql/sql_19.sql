# 1. product 테이블에서
#	 price가 2000보다 작은 레코드를 가져오셔요.
 use erp;
 select 
	* 
 from 
	product
where 
	price < 2000;
    
# 2. SQL일반 산술연산기로 써보자
SELECT 
	1 < 2,
    100 + 200,
    30 >= 20
FROM 
	dual;
    
# 3. null 값의 의미
select
	*
from
	customer
where
	birthday is null;
    
# 4. customer테이블에 birthday에 null값 저장
insert into customer (customer_id, customer_name, birthday, membertype_id)
values
	(6, "안녕하세요", null, 1),
    (7, "자바", null, 2);

# 5. 입력된 데이터 확인
select
	*
from
	customer;

# 6. customer 테이블에서 null이 아닌 경우를 검색하세요
select *
from customer
where birthday is not null;

# 7. customer 테이블에서 birthday가 null인 값을 삭제하세요.
delete from customer where birthday is null;

# 8. null을 일반값과 비교하기
select
	1 = null,		-- null		1이 null인지 아닌지 알 수 없음
    1 <=> null,		-- 0		1이 null과 같지않은지를 알 수 없음
    null <=> null,	-- 1		null과 null은 같지않음
    1 != null,		-- null
    1 <> null,		-- null
    1 < null;		-- null

# 9. boolean형 값
select
	1,				-- 1		
    0,				-- 0
    100 * 0,		-- 0
    true,			-- 1
    false,			-- 0
    1 > 0,			-- 1	true 이므로 1
    null <=> null;	-- 1	
# ****************
# 10. boolean형 값의 다른 형태
#	  sql에서 boolean값을 저장할 eOSMS TINYINT(한자리 정수형이므로)를 많이 사용한다.
#	  BOOLEAN비교를 할 때
#	  		  =(비교연산자) 1 = 0 : FALSE, 2 = 0 : FALSE, 1 = 100 : FALSE
# 	  		  IS 연산자를 사용할 때 0 = FALSE 그외는 모두 TRUE
select
	1 = true,		-- 1		1은 true
    1 = false,		-- 0		
    100 = true,		-- 0		sql에선 1이 아닌 값은 false
    1 is true,		-- 1
    1 is not true,	-- 0		1이 true가 아니냐는 물음, false
    0 is false,		-- 1
    0 is not false;	-- 0
    
# 12. 문자열
#sql관점 >> '약용 핸드솝' = "약용 핸드솝" = " 약용 핸드솝 "
#프로그래밍 언어 관점 >> '' != " " != ' ' != 0 != null != undefine // 다 다른의미
# 		'':문자형	  "":문자열(문자의 배열)   0 : 숫자   
#		null:메모리의 상태 비었음   undefind : 

#문자개수0, 문자열이 공백1,, 숫자0, 데이터방주소x, 사용한적이없다
# 수업 종료 : null, 수업기간 끝 : undefine, 인원수가 0,....
#sql에서는 문자개념x 모두 문자열
#
select * from product where product_name = '약용 핸드솝';
select * from product where product_name = "약용 핸드솝";
select * from product where product_name = " 약용 핸드솝";

# 영문자를 검색할때 주의점
create table search(
	id		int,
    val		varchar(5)
);
insert into search (id, val) 
values
	(1, 'A'),
	(2,"a"),
    (3,'A		'),
    (4,'B');

select * from search;
select * from search where val = 'A';
select * from search where binary(val) = 'a';
-- 두개 다 같은 결과 나옴/ binary쓰면 대소문자 구분 가능,
/*
ALTER DATABASE [Database Name] CHARACTER SET utf8 COLLATE utf8_bin;
ALTER TABLE [Table Name] CHARACTER SET utf8 COLLATE utf8_bin;
ALTER TABLE [Table Name] CHANGE [Column Name] [Column Name] CHARACTER SET utf8 COLLAT
E utf8_bin;
*/

-- Flush PRIVIATY;

# 13. 문자열 패턴비교(정규표현식)
# LIKE '%약용%' : '약용'이라는 글자가 들은 모든 문자열
# LIKE '_약용_' : '약용'이라는 단어 앞뒤로 한글자씩 들어있는 문자열들
select * from product where product_name LIKE '약용%';
select * from product where product_name LIKE '%약용%';
select * from product where product_name LIKE '_약용_';

insert into product 
values(5,'비누 딸기100%',10,150),
	  (6,'100%우유_입욕제',15,160);

select * from product where product_name = '비누 딸기100%';
select * from product where product_name = '100%우유_입욕제';
select * from product where product_name LIKE '%비누%';
select * from product where product_name LIKE '%100%%';
select * from product where product_name LIKE '비누%';
select * from product where product_name LIKE '%100\%';
select * from product where product_name LIKE '%\_%';
#이스케이프 시퀀스라고 하는 특수기호 입력을 이용합니다.
#\n : 출력하고 다음줄로 이동하세요
#\r : 출력하고 맨앞줄로 이동하세요
#\t : 탭칸을 채워주세요 = 빈 공백을 8칸 또는 4칸 추가해주세요.
#\\ : '\'문자를 출력해주세요
#\% : '%'문자를 출력해주세요
#\' : '''문자를 출력해주세요
#\" : '"'문자를 출력해주세요
select * from product where product_name LIKE '%100\%%';
select "촉촉 \'향기\' 비누";
#15. s라짜형 문자열형 비교연산자가 사용가능
select * from customer where birthday < '1990-01-01';	-- 1984 1976
#16. search 테이블을 이용한 문자열 비교
select * from search where val > 'A';	-- A B

#17. 문자열 숫자와 숫자를 비교한 경우 어떻게 될까요?
-- select '10' > '4', 10 > 4, '10' > 4;

# 18. 여러 조건을 결합한다. 논리연산
/*	  조인 GROUP BY
	  AND, OR : 논리연산의 결과 : TRUE | FALSE = 1 / 0
	  논리연산
-----------------------------------------------------
논리곱 | AND | && | TRUE && TRUE = TRUE
				  TRUE && FALSE = FALSE
                  FALSE && TRUE = FALSE
                  FASLE && FALSE = TRUE
------------------------------------------------------
논리합 | OR | || | TRUE || TRUE = TRUE
				 TRUE || FALSE = TRUE
                 FALSE || TRUE = TRUE
                 FALSE || FALSE = FALSE
------------------------------------------------------
부정  | NOT | !  |  !TRUE = FALSE, !FALSE = TRUE
------------------------------------------------------
배타적 논리합 | XOR |  값1 XOR 값2 | TRUE XOR TRUE = FALSE
								 FALSE XOR TRUE = TRUE
                                 FALSE XOR TRUE = TRUE
                                 FALSE XOR FALSE = FALSE
*/

select * 
from product
where (price >= 100) and (price < 150);

select * from product;
-- 가격이 100이상 150미만 stock이 10 이상 남아있는 제품 리스트
select * 
from product
where ((price >= 100) and (price < 150)) and 
		stock >= 10;

-- 16 price > 100 보다 작거나 150보다 큰 자료를 가져오세요
select * 
from product 
where price < 100 ||
	  price >= 150;

-- 17 price > 100 보다 작거나 150보다 큰 자료 또는 stock 20이상 2자료를 가져오세요
select * 
from product 
where (price < 100 ||
	  price >= 150) ||
      stock >= 20;
-- 이 연산의 결과는?
select 0 or null, 	-- 0은 거짓, 거짓 거짓이어야 거짓(0) 나옴, null 출력
	   1 or null, 	-- or은 둘 중 하나만 맞으면 됨
       null or null;

select * from customer where membertype_id <> 1;
select * from customer where membertype_id != 1;
select * from customer where !(membertype_id = 1);
select * from customer where NOT(membertype_id = 1);

# 18. 두 조건이 하나만 만족하는 경우 참, 두 조건이 같으면 거짓
#	  price >= 100 price < 150 이 두 조건중 한쪽만 만족하는 레코드를 가져오세요
#	  여집합 = 모든 합집합에서 공통된 경우 빠지는 집합, 합집합 - 교집합
select *
from product
where (price >= 100) XOR (price < 150);

# 19. 가격이 100 이상 또는 150미만 또는 stock 100이상인 데이터중에 어느 것을 만족하는 레코드를
#	  product레코드에 가져오세요
#또는 그리고 + 나머지
#문제에서 그리고는 들어가면 안됩니다. 어느것 하나만 만족, 배타적 논리합XOR
select *
from product
where ((price >= 100) XOR (price < 150)) XOR stock >= 100;



