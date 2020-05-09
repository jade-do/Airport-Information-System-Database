DROP TABLE TestHistory;
DROP TABLE Airplane;
DROP TABLE Technician;
DROP TABLE TrafficController;
DROP TABLE Employee;
DROP TABLE Model;
DROP TABLE QualityTest;

CREATE TABLE Model (
	modelNo		NUMBER(4) PRIMARY KEY,	
	capacity	NUMBER(4) NOT NULL,
	weight		NUMBER(10,2) NOT NULL
);

CREATE TABLE Airplane (
	registrationNo	NUMBER(10) PRIMARY KEY,
	modelNo		NUMBER(4) NOT NULL,
	CONSTRAINT fk_airplane FOREIGN KEY (modelNo) REFERENCES Model (modelNo)
);

CREATE TABLE Employee (
	ssn		NUMBER(9) PRIMARY KEY,
	unionNo		NUMBER(4) NOT NULL,
	firstName	VARCHAR(50) NOT NULL,	
	lastName	VARCHAR(50) NOT NULL,
	address		VARCHAR(1000) NOT NULL,
	salary		NUMBER(7) NOT NULL		
);

CREATE TABLE Technician (
	ssn		NUMBER(9) NOT NULL,
	expertModel	NUMBER(4) NOT NULL,
	CONSTRAINT pk_technician PRIMARY KEY (ssn, expertModel),
	CONSTRAINT fk_technician1 FOREIGN KEY (ssn) REFERENCES Employee (ssn),
	CONSTRAINT fk_technician2 FOREIGN KEY (expertModel) REFERENCES Model (modelNo)
);

CREATE TABLE TrafficController (
	ssn 		NUMBER(9) NOT NULL,
	medExamDate	DATE DEFAULT (sysdate) NOT NULL,
	CONSTRAINT pk_trafficcontroller PRIMARY KEY (ssn, medExamDate),
	CONSTRAINT fk_trafficcontroller1 FOREIGN KEY (ssn) REFERENCES Employee (ssn)
);

CREATE TABLE QualityTest(
	faaNo		NUMBER(4) PRIMARY KEY,
	name		VARCHAR(50),
	maxScore	NUMBER(3) NOT NULL
);

CREATE TABLE TestHistory (
	testId		NUMBER(10) PRIMARY KEY,
	faaNo		NUMBER(4) NOT NULL,
	airplaneNo	NUMBER(10) NOT NULL,
	testerSsn	NUMBER(9) NOT NULL,
	testDate	DATE DEFAULT (sysdate) NOT NULL,
	testHours	NUMBER(4) NOT NULL,
	score		NUMBER(3) NOT NULL,
	CONSTRAINT fk_testhistory1 FOREIGN KEY (testerSsn) REFERENCES Employee (ssn),
	CONSTRAINT fk_testhistory2 FOREIGN KEY (faaNo) REFERENCES QualityTest (faaNo),
	CONSTRAINT fk_testhistory3 FOREIGN KEY (airplaneNo) REFERENCES Airplane (registrationNo)
);

