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

INSERT INTO Student values('20180001', '����', '��', DATE '2000-03-08', '��Ϣ��ȫ');
INSERT INTO Student values('20180002', '����', 'Ů', DATE '1999-09-01', '�������ѧ�뼼��');
INSERT INTO Student values('20180003', '����', 'Ů', DATE '2001-08-01', '�������ѧ�뼼��');
INSERT INTO Student values('20180004', '����', '��', DATE '2000-01-08', '�������ѧ�뼼��');
INSERT INTO Student values('20180205', '������', '��', DATE '2001-11-01', '��Ϣ��������Ϣϵͳ');
INSERT INTO Student values('20180306', '����', '��', DATE '2000-06-12', '���ݿ�ѧ������ݼ���');
INSERT INTO Student values('20180307', '���Ѽ�', 'Ů', DATE '2001-12-07', '���ݿ�ѧ������ݼ���');

INSERT INTO Course values('81001', '������ƻ�����C����', 4, NULL);
INSERT INTO Course values('81002', '���ݽṹ', 4, '81001');
INSERT INTO Course values('81003', '���ݿ�ԭ��', 4, '81002');
INSERT INTO Course values('81004', '��Ϣϵͳ����', 4, '81003');
INSERT INTO Course values('81005', '����ϵͳ', 4, '81001');
INSERT INTO Course values('81006', 'Python����', 3, '81002');
INSERT INTO Course values('81007', '��ɢ��ѧ', 4, NULL);
INSERT INTO Course values('81008', '�����ݼ�������', 4, '81003');

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