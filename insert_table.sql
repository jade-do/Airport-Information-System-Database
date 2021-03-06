DELETE FROM TestHistory;
DELETE FROM Airplane;
DELETE FROM Technician;
DELETE FROM TrafficController;
DELETE FROM Employee;
DELETE FROM Model;
DELETE FROM QualityTest;

INSERT INTO Model VALUES (1000, 500, 3000.5);
INSERT INTO Model VALUES (7275, 200, 2310);
INSERT INTO Model VALUES (9999, 50, 1000);
INSERT INTO Model VALUES (4449, 700, 5000);

INSERT INTO Airplane VALUES (123456789, 4449);
INSERT INTO Airplane VALUES (987543621, 7275);
INSERT INTO Airplane VALUES (111222333, 4449);
INSERT INTO Airplane VALUES (444555888, 1000);
INSERT INTO Airplane VALUES (999222444, 7275);

INSERT INTO Employee VALUES (721074426, 0406, 'Alice', 'Wonderland', '1320 S Dixie Hwy, Miami, FL 33146', 65000);
INSERT INTO Employee VALUES (264153998, 0125, 'Martina', 'Velichovska', '39 Stockton St, San Francisco, CA 94108', 80000);
INSERT INTO Employee VALUES (170119497, 2030, 'Gia', 'Do', 'Boulevard de Parc, 77700 Coupvray, France', 72000);
INSERT INTO Employee VALUES (241032961, 0406, 'Brad', 'Pitt', '6701 Red Rd, Coral Gables, FL 33143', 70000);
INSERT INTO Employee VALUES (619866062, 0125, 'Clemson', 'Martynev', '6620 SW 57th Ave, South Miami, FL 33143', 82000);

INSERT INTO Technician VALUES (721074426, 7275);
INSERT INTO Technician VALUES (721074426, 1000);
INSERT INTO Technician VALUES (721074426, 4449);
INSERT INTO Technician VALUES (264153998, 7275);
INSERT INTO Technician VALUES (264153998, 4449);
INSERT INTO Technician VALUES (170119497, 7275);

INSERT INTO TrafficController VALUES (241032961, TO_DATE('04/04/2020', 'MM/DD/YYYY'));
INSERT INTO TrafficController VALUES (619866062, TO_DATE('04/01/2020', 'MM/DD/YYYY'));

INSERT INTO QualityTest VALUES (1237, 'Wings Test', 100);
INSERT INTO QualityTest VALUES (7321, 'Fuel Test', 50);
INSERT INTO QualityTest VALUES (4421, 'Wheels Test', 60);
INSERT INTO QualityTest VALUES (3445, 'Windows Test', 20);

INSERT INTO TestHistory VALUES(0123456789, 7321, 123456789, 721074426, TO_DATE('04/04/2020', 'MM/DD/YYYY'), 4, 99);
INSERT INTO TestHistory VALUES(0023456789, 4421, 111222333, 264153998, TO_DATE('09/08/2015', 'MM/DD/YYYY'), 14, 40);
INSERT INTO TestHistory VALUES(0003456789, 3445, 999222444, 721074426, TO_DATE('02/02/2019', 'MM/DD/YYYY'), 9, 17);
INSERT INTO TestHistory VALUES(0000456789, 1237, 987543621, 170119497, TO_DATE('09/08/2019', 'MM/DD/YYYY'), 10, 88);
INSERT INTO TestHistory VALUES(5222456789, 3445, 111222333, 264153998, TO_DATE('04/26/2015', 'MM/DD/YYYY'), 12, 78);
INSERT INTO TestHistory VALUES(7777777777, 7321, 111222333, 264153998, TO_DATE('07/18/2015', 'MM/DD/YYYY'), 5, 14);
INSERT INTO TestHistory VALUES(8888889885, 3445, 987543621, 170119497, TO_DATE('02/14/2014', 'MM/DD/YYYY'), 20, 20);
