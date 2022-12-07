-- 테이블생성
create table kmong.student (
    student_id int(10) comment '학생번호',
    major_id int(10) comment '학과ID',
    bl_prfs_id int(10) comment '담당교수ID',
    name varchar(20) comment '학생이름',
    tel varchar(15) comment '학생연락처'
);

create table kmong.professor (
    prfs_id int(10) comment '교수ID',
    bl_major_id int(10) comment '소속학과ID',
    name varchar(20) comment '교수이름',
    tel varchar(15) comment '교수연락처'
);

create table kmong.major (
    major_id int(10) comment '학과ID',
    major_title varchar(30) comment '학과명',
    major_prfs_cnt int(5) comment '학과소속교수수',
    major_student_cnt int(5) comment '학과소속학생수',
    tel varchar(15) comment '학과사무실연락처'
);
select * from kmong.student;
-- 기초데이터 입력
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1001, 9901, 7029901, '한지호', '01098447362');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1002, 9902, 7029902, '김은숙', '01023456787');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1003, 9903, 7039903, '강경호', '01092938476');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1004, 9904, 7049904, '민현민', '01088786623');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1005, 9905, 7059905, '조승우', '01092877795');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1006, 9901, 7069901, '이남철', '01045671234');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1007, 9902, 7079902, '이강철', '01021213434');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1008, 9903, 7089903, '조민수', '01098937262');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1009, 9904, 7099904, '박찬경', '01029884432');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1010, 9905, 7109905, '이도경', '01029385647');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1011, 9901, 7019901, '이만호', '01099996453');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1012, 9902, 7029902, '김효민', '01092887666');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1013, 9903, 7039903, '최효성', '01098999933');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1014, 9904, 7049904, '우민국', '01087651112');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1015, 9905, 7059905, '지대한', '01093934848');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1016, 9901, 7069901, '한나름', '01023329882');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1017, 9902, 7079902, '유육경', '01099881111');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1018, 9903, 7089903, '조민경', '01023311120');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1019, 9904, 7099904, '경지수', '01029100293');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1020, 9905, 7109905, '오종환', '01098882226');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1021, 9901, 7019901, '조형민', '01098909876');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1022, 9902, 7029902, '이수강', '01099992222');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1023, 9903, 7039903, '서민호', '01092997654');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1024, 9904, 7049904, '박효숙', '01022293332');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1025, 9905, 7059905, '남궁옥경', '01099938475');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1026, 9901, 7069901, '피경남', '01029222233');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1027, 9902, 7079902, '고주경', '01099226655');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1028, 9903, 7089903, '하지만', '01022228965');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1029, 9904, 7099904, '기지효', '01012090912');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1030, 9905, 7109905, '박민호', '01074746363');

INSERT INTO kmong.professor (prfs_id, bl_major_id, name, tel) VALUES (7019901, 9901, '김보경', '023445678');
INSERT INTO kmong.professor (prfs_id, bl_major_id, name, tel) VALUES (7029902, 9902, '조숙', '023446789');
INSERT INTO kmong.professor (prfs_id, bl_major_id, name, tel) VALUES (7039903, 9903, '이호', '023449584');
INSERT INTO kmong.professor (prfs_id, bl_major_id, name, tel) VALUES (7049904, 9904, '박철남', '023449588');
INSERT INTO kmong.professor (prfs_id, bl_major_id, name, tel) VALUES (7059905, 9905, '이만기', '023443443');
INSERT INTO kmong.professor (prfs_id, bl_major_id, name, tel) VALUES (7069901, 9901, '강조교', '023449994');
INSERT INTO kmong.professor (prfs_id, bl_major_id, name, tel) VALUES (7079902, 9902, '이희숙', '023443321');
INSERT INTO kmong.professor (prfs_id, bl_major_id, name, tel) VALUES (7089903, 9903, '소머리', '023440123');
INSERT INTO kmong.professor (prfs_id, bl_major_id, name, tel) VALUES (7099904, 9904, '두수위', '023443327');
INSERT INTO kmong.professor (prfs_id, bl_major_id, name, tel) VALUES (7109905, 9905, '지만래', '023449995');

INSERT INTO kmong.major (major_id, major_title, major_prfs_cnt, major_student_cnt, tel) VALUES (9901, '컴퓨터공학과', 7, 123, '023454321');
INSERT INTO kmong.major (major_id, major_title, major_prfs_cnt, major_student_cnt, tel) VALUES (9902, '아동보육학과', 8, 345, '023456676');
INSERT INTO kmong.major (major_id, major_title, major_prfs_cnt, major_student_cnt, tel) VALUES (9903, '국문학과', 6, 213, '023456567');
INSERT INTO kmong.major (major_id, major_title, major_prfs_cnt, major_student_cnt, tel) VALUES (9904, '경제학과', 5, 432, '023456987');
INSERT INTO kmong.major (major_id, major_title, major_prfs_cnt, major_student_cnt, tel) VALUES (9905, '사회복지학과', 9, 312, '023454534');

select *
from kmong.major;
select S.*, M.*
from  kmong.student S
	left outer join kmong.major M
    on S.major_id = 9901;

delete from kmong.major
where major_id in(9903,9904,9905);

select 
	count(*)
from 
	kmong.student;

-- 가져올 데이터
select 
	student.student_id,
    student.major_id,
    student.name,
    major.major_title
-- 연관테이블
from 
	kmong.student, 
	kmong.major				-- 여기까지만 하면 카디션 방식
-- 데이터 가져올 조건 
where 
	student.major_id = major.major_id;
-- ----------------
-- 가져올 데이터
select 
	student.student_id,
    student.major_id,
    student.name,
    major.major_title
-- 연관테이블
from 
	kmong.student
    inner join
		kmong.major	
-- 데이터 가져올 조건 
on 
	student.major_id = major.major_id
where major.major_title = "컴퓨터공학과";
-- -------------------
-- 가져올 데이터
select 
	student.student_id as 힉셍반호,
    student.name as 학생이름,
    if(major.major_title = "컴퓨터공학과",major.major_title, null) as 학과명
-- 연관테이블
from 
	kmong.student
    left outer join
		kmong.major	
-- 데이터 가져올 조건 
	on 
		student.major_id = major.major_id;


# 카티션 곱 = 그냥 넣고 출력하면 됨, from A cross join B이 안시 sql
select * from kmong.major;
select * from kmong.professor;

select 
	m.major_id,
    m.major_title,
    p.prfs_id,
    p.name
    
from 
	kmong.major m cross join
	kmong.professor p;

# 교수이름과 학과명 출력
select 
	p.name, m.major_title
from 
	kmong.professor p
	inner join 
		kmong.major m
    on 
		p.bl_major_id = m.major_id;
	
select * from kmong.professor;
