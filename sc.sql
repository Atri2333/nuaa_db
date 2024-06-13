DROP TABLE SC;
DROP TABLE Course;
DROP TABLE Student;
PURGE  RECYCLEBIN;

CREATE TABLE Student
(
    Sno CHAR(8) PRIMARY KEY,
    Sname VARCHAR(20),
    Ssex CHAR(6),
    Sbirthdate Date,
    Smajor VARCHAR(40)
);

CREATE TABLE Course
(
    Cno CHAR(5) PRIMARY KEY,
    Cname VARCHAR(40) NOT NULL,
    Ccredit SMALLINT,
    Cpno CHAR(5),
    FOREIGN KEY (Cpno) REFERENCES Course(Cno)
);

CREATE TABLE SC
(
    Sno CHAR(8),
    Cno CHAR(5),
    Grade SMALLINT,
    Semester CHAR(5),
    Teachingclass CHAR(8),
    PRIMARY KEY(Sno, Cno),
    FOREIGN KEY(Sno) REFERENCES Student (Sno),
    FOREIGN KEY(Cno) REFERENCES Course (Cno)
);

-- CREATE UNIQUE INDEX Idx_StuSname ON Student(Sname);
-- CREATE UNIQUE INDEX Idx_CouCname ON Course(Cname);
-- CREATE UNIQUE INDEX Idx_SCCno ON SC(Sno ASC, CNO DESC);

INSERT INTO Student values('20180001', '李勇', '男', DATE '2000-03-08', '信息安全');
INSERT INTO Student values('20180002', '刘晨', '女', DATE '1999-09-01', '计算机科学与技术');
INSERT INTO Student values('20180003', '王敏', '女', DATE '2001-08-01', '计算机科学与技术');
INSERT INTO Student values('20180004', '张立', '男', DATE '2000-01-08', '计算机科学与技术');
INSERT INTO Student values('20180205', '陈新奇', '男', DATE '2001-11-01', '信息管理与信息系统');
INSERT INTO Student values('20180306', '赵明', '男', DATE '2000-06-12', '数据科学与大数据技术');
INSERT INTO Student values('20180307', '王佳佳', '女', DATE '2001-12-07', '数据科学与大数据技术');

INSERT INTO Course values('81001', '程序设计基础与C语言', 4, NULL);
INSERT INTO Course values('81002', '数据结构', 4, '81001');
INSERT INTO Course values('81003', '数据库原理', 4, '81002');
INSERT INTO Course values('81004', '信息系统概论', 4, '81003');
INSERT INTO Course values('81005', '操作系统', 4, '81001');
INSERT INTO Course values('81006', 'Python语言', 3, '81002');
INSERT INTO Course values('81007', '离散数学', 4, NULL);
INSERT INTO Course values('81008', '大数据技术概论', 4, '81003');

INSERT INTO SC values('20180001', '81001', 85, '20192', '81001-01');
INSERT INTO SC values('20180001', '81002', 96, '20201', '81002-01');
INSERT INTO SC values('20180001', '81003', 87, '20202', '81003-01');
INSERT INTO SC values('20180002', '81001', 80, '20192', '81001-02');
INSERT INTO SC values('20180002', '81002', 98, '20201', '81002-01');
INSERT INTO SC values('20180002', '81003', 71, '20202', '81003-02');
INSERT INTO SC values('20180003', '81001', 81, '20192', '81001-01');
INSERT INTO SC values('20180003', '81002', 76, '20201', '81002-02');
INSERT INTO SC values('20180004', '81001', 56, '20192', '81001-02');
INSERT INTO SC values('20180004', '81003', 97, '20201', '81002-02');
INSERT INTO SC values('20180205', '81003', 68, '20202', '81003-01');

COMMIT;

DROP TABLE IF EXISTS `admin`;
CREATE TABLE `admin` (
  `id` int(11) NOT NULL DEFAULT '0',
  `username` text,
  `password` text,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of admin
-- ----------------------------
INSERT INTO `admin` VALUES ('1', 'admin', 'admin');
INSERT INTO `admin` VALUES ('2', 'admin2', 'admin2');
INSERT INTO `admin` VALUES ('4', 'ayy2', '114514');