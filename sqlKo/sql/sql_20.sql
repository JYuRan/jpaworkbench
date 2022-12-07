# [문제1] 아래의 요구사항을 반영하여 테이블을 작성하시오(sql만)
create database green_bbs;
use green_bbs;

CREATE TABLE green_bbs.notice(
	no			int not null auto_increment comment '번호',
    subject 	varchar(50) not null comment '제목',
    content 	varchar(200) not null comment '내용',
    writer 		varchar(20) not null comment '작성자',
    writer_date date not null comment '작성일자',
    primary key(no)
);

# [문제2] 샘플데이터를 5개 입력해주세요. (아래사항은 예제입니다. 다른내용도 허용)
#								 (writer는 'admin'만 됨)(결과출력화면 첨부)
INSERT INTO green_bbs.notice(no,subject,content,writer,writer_date)
	values(null,'서비스 개시 안내','서비스를 개시합니다.','admin','2022-8-10'),
		  (null,'안녕하세요','서비스를 홍보해주셔요..','admin','2022-8-11'),
          (null,'서비스를 긴급점검합니다.','불편을 드려 죄송합니다.','admin','2022-8-12'),
          (null,'공지글입니다.','공지글입니다.','admin','2022-8-13'),
          (null,'공지글 테스트','공지글 테스트입니다.','admin','2022-8-14');



# [문제3] 5번 공지사항을 검색한 결과를 첨부해주세요(화면첨부)
SELECT 
	*
FROM 
	notice
WHERE 
	no = 5;

# [문제4] 테이블을 생성한 후 테이블구조를 조회하세요.(결과 첨부)
DESC green_bbs.notice;
# [문제5] 3번 자료의 제목과 내용을 아래 내용으로 수정해주세요.(결과화면 첨부)
#	제목 : "긴급공지입니다."
#	내용 : "공지사항을 수정합니다."
UPDATE 
	green_bbs.notice 
SET 
	subject = "긴급공지입니다." 
WHERE 
	no = 3;
UPDATE 
	green_bbs.notice 
SET 
	content = "공지사항을 수정합니다."
WHERE 
	no = 3;

# [문제6] 4번 자료를 삭제하고 결과를 조회해주세요(결과화면 첨부)
DELETE 
	FROM 
		green_bbs.notice
    WHERE
		no = 4;
SELECT * FROM notice;
# 제약조건 (=constraint) 검색방법
select
	*
from
	information_schema.REFERENTIAL_CONSTRAINTS
where
	table_name = 'notice';
select * from information_schema.table_constraints
where constraint_schema = 'kmong';
# 확인하고싶은 테이블의 제약조건 확인하는법
select * from information_schema.table_constraints
where table_name = 'notice';

# [문제7] notice 테이블 제약조건을 확인해주세요(결과화면 첨부)
#		 (다음 SQL이용)
# 확인하고싶은 데이터베이스나 테이블의 제약조건 확인하는법
SELECT * FROM information_schema.table_constraints
WHERE table_name= 'notice';

# [문제8] notice 테이블의 총 데이터 개수를 조회하세요.(결과화면 첨부)
SELECT
	count(*)
FROM
	green_bbs.notice;

# [문제9] 다음 연산식의 결과를 조회하세요.
SELECT
1 = NULL, 1 <=> NULL, NULL <=> NULL,
1 != NULL, 1 <> NULL, 1 < NULL;

# [문제10] 다음 연산식의 결과를 조회하세요.
SELECT
	1, 0, 100*0, TRUE, FALSE, 1>0, NULL <=> NULL;




