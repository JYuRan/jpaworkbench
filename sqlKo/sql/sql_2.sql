### CREATE = insert into
INSERT INTO `board`.`user`
(`id`,
`name`,
`user_id`,
`user_pw`,
`user_type`,
`reg_date`,
`log_date`)
VALUES
(1,
'구름',
'grum',
'mysql',
1,
now(),
NOW());
## Read = Select 
-- use board;
-- SELECT *
-- FROM user;
SELECT *
	FROM `board`.`user`;
    

