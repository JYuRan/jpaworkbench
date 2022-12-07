INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1031, 9901, null, '신채령', '01044755564');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1032, 9902, null, '이만도', '01022287777');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1033, 9903, null, '박만호', '01099972253');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1034, 9904, null, '최이강', '01029386577');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1035, 9905, null, '강이민', '01033334444');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1036, 9901, null, '민형도', '01099973331');
INSERT INTO kmong.student (student_id, major_id, bl_prfs_id, name, tel) VALUES (1037, 9902, null, '도지란', '01055567774');

select 
	s.name,
    s.bl_prfs_id
from 
	kmong.student s
left outer join 
	kmong.professor p
on
	s.bl_prfs_id = p.prfs_id;

    

-- 신인교수 초빙 -> 아직 학교에 출강하기 전
select * from kmong.professor;
INSERT INTO kmong.professor (prfs_id, bl_major_id, name, tel) 
VALUES (8000123, 9901, '김교수', '01012344321'),
	   (8000234, 9901, '이교수', '01023455432'),
	   (8000345, 9901, '장교수', '01034566543');

-- outter join의 사용이유 : 학생이 아직 할당되지 않은 교수를 보기 위함
select 
	s.name,
    s.bl_prfs_id,
    p.name,
    p.prfs_id
from 
	kmong.student s
right outer join 
	kmong.professor p
on
	s.bl_prfs_id = p.prfs_id;


select 
	s.name,
    s.bl_prfs_id,
    p.name,
    p.prfs_id
from 
	kmong.professor p
right outer join 
	kmong.student s
on
	s.bl_prfs_id = p.prfs_id;
-- 교수리스트를 구하라 (지도교수 + 신임교수(아직 담당학생없음))
-- 지도교수 : inner join

-- select query 비중이 큼, 데이터베이스를 나누어 쓰는 것이 이부분 효율성이 높음 => 정규화의 이유
-- 테이블 하나에 모으면 추가 삭제는 빠르지만 조회속도가 느려짐

-- 아직 배정받지 않은 교수들
select
	p.name, p.prfs_id, s.name, s.bl_prfs_id
from
	kmong.professor p
left outer join
	kmong.student s
on	-- 기본키   /  외래키
	p.prfs_id = s.bl_prfs_id
where
	s.bl_prfs_id is null;

















