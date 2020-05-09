
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[15];
};
static struct sqlcxp sqlfpn =
{
    14,
    "src/project.pc"
};


static unsigned int sqlctx = 1282315;


static struct sqlexd {
   unsigned long  sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
            short *cud;
   unsigned char  *sqlest;
            char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
   unsigned char  **sqphsv;
   unsigned long  *sqphsl;
            int   *sqphss;
            short **sqpind;
            int   *sqpins;
   unsigned long  *sqparm;
   unsigned long  **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
            int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
   unsigned char  *sqhstv[9];
   unsigned long  sqhstl[9];
            int   sqhsts[9];
            short *sqindv[9];
            int   sqinds[9];
   unsigned long  sqharm[9];
   unsigned long  *sqharc[9];
   unsigned short  sqadto[9];
   unsigned short  sqtdso[9];
} sqlstm = {13,9};

/* SQLLIB Prototypes */
extern sqlcxt (/*_ void **, unsigned int *,
                   struct sqlexd *, struct sqlcxp * _*/);
extern sqlcx2t(/*_ void **, unsigned int *,
                   struct sqlexd *, struct sqlcxp * _*/);
extern sqlbuft(/*_ void **, char * _*/);
extern sqlgs2t(/*_ void **, char * _*/);
extern sqlorat(/*_ void **, unsigned int *, void * _*/);

/* Forms Interface */
static int IAPSUCC = 0;
static int IAPFAIL = 1403;
static int IAPFTL  = 535;
extern void sqliem(/*_ unsigned char *, signed int * _*/);

 static char *sq0004 = 
"select A.registrationNo ,A.modelNo ,M.capacity ,M.weight  from Airplane A ,M\
odel M where A.modelNo=M.modelNo           ";

 static char *sq0005 = 
"select E.ssn ,E.unionNo ,E.firstName ,E.lastName ,E.address ,E.salary ,T.exp\
ertModel  from Employee E ,Technician T where E.ssn=T.ssn           ";

 static char *sq0006 = 
"select E.ssn ,E.unionNo ,E.firstName ,E.lastName ,E.address ,E.salary ,C.med\
ExamDate  from Employee E ,TrafficController C where E.ssn=C.ssn           ";

 static char *sq0007 = 
"select H.testId ,H.faaNo ,H.airplaneNo ,H.testerSsn ,H.testDate ,H.testHours\
 ,H.score ,Q.name ,Q.maxScore  from TestHistory H ,QualityTest Q where H.faaNo\
=Q.faaNo           ";

 static char *sq0013 = 
"select Employee.ssn ,Employee.unionNo ,Employee.firstName ,Employee.lastName\
 ,Employee.address ,Employee.salary ,Technician.expertModel  from Employee ,Te\
chnician where (Employee.ssn=Technician.ssn and Employee.salary>(select avg(Sa\
lary)  from Employee ,Technician where Employee.ssn=Technician.ssn))          \
 ";

 static char *sq0014 = 
"select Technician.ssn ,Employee.firstName ,Employee.lastName ,Technician.exp\
ertModel ,Model.capacity ,Model.weight  from Employee ,Technician ,Model where\
 ((Technician.ssn=:b0 and Employee.ssn=:b0) and Technician.expertModel=Model.m\
odelNo)           ";

 static char *sq0015 = 
"select expertModel ,count(ssn)  from Technician  group by expertModel       \
    ";

 static char *sq0016 = 
"select H.testId ,H.faaNo ,H.airplaneNo ,H.testerSsn ,H.testDate ,H.testHours\
 ,H.score ,Q.name ,Q.maxScore  from TestHistory H ,QualityTest Q where (H.airp\
laneNo=:b0 and H.faaNo=Q.faaNo) order by Q.maxScore desc             ";

 static char *sq0017 = 
"select E.ssn ,E.unionNo ,E.firstName ,E.lastName ,E.address ,E.salary ,C.med\
ExamDate  from Employee E ,TrafficController C where E.ssn=C.ssn           ";

 static char *sq0018 = 
"select E.ssn ,E.firstName ,E.lastName ,T.airplaneNo ,count(T.testId)  from E\
mployee E ,TestHistory T where E.ssn=T.testerSsn group by E.ssn,E.firstName,E.\
lastName,T.airplaneNo           ";

 static char *sq0019 = 
"select Employee.firstName ,Employee.lastName ,TestHistory.airplaneNo ,TestHi\
story.faaNo ,TestHistory.testDate  from Employee ,TestHistory where (Employee.\
ssn=TestHistory.testerSsn and TestHistory.testDate between TO_DATE('09/01/2015\
','MM/DD/YYYY') and TO_DATE('12/31/2015','MM/DD/YYYY')) order by faaNo        \
    ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* CUD (Compilation Unit Data) Array */
static short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,1,0,0,32,179,0,0,0,0,0,1,0,
20,0,0,0,0,0,27,192,0,0,4,4,0,1,0,1,97,0,0,1,97,0,0,1,10,0,0,1,10,0,0,
51,0,0,3,0,0,30,264,0,0,0,0,0,1,0,
66,0,0,4,119,0,9,283,0,0,0,0,0,1,0,
81,0,0,4,0,0,13,292,0,0,4,0,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,4,0,0,
112,0,0,4,0,0,15,297,0,0,0,0,0,1,0,
127,0,0,5,144,0,9,318,0,0,0,0,0,1,0,
142,0,0,5,0,0,13,327,0,0,7,0,0,1,0,2,3,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
2,3,0,0,2,3,0,0,
185,0,0,5,0,0,15,332,0,0,0,0,0,1,0,
200,0,0,6,151,0,9,353,0,0,0,0,0,1,0,
215,0,0,6,0,0,13,361,0,0,7,0,0,1,0,2,3,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
2,3,0,0,2,97,0,0,
258,0,0,6,0,0,15,366,0,0,0,0,0,1,0,
273,0,0,7,173,0,9,386,0,0,0,0,0,1,0,
288,0,0,7,0,0,13,393,0,0,9,0,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,97,0,0,2,
3,0,0,2,3,0,0,2,97,0,0,2,3,0,0,
339,0,0,7,0,0,15,398,0,0,0,0,0,1,0,
354,0,0,8,101,0,3,446,0,0,6,6,0,1,0,1,3,0,0,1,3,0,0,1,97,0,0,1,97,0,0,1,97,0,0,
1,3,0,0,
393,0,0,9,57,0,3,447,0,0,2,2,0,1,0,1,3,0,0,1,3,0,0,
416,0,0,10,46,0,2,465,0,0,1,1,0,1,0,1,3,0,0,
435,0,0,11,47,0,2,466,0,0,1,1,0,1,0,1,3,0,0,
454,0,0,12,52,0,5,483,0,0,2,2,0,1,0,1,3,0,0,1,3,0,0,
477,0,0,13,311,0,9,509,0,0,0,0,0,1,0,
492,0,0,13,0,0,13,517,0,0,7,0,0,1,0,2,3,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
2,3,0,0,2,3,0,0,
535,0,0,13,0,0,15,522,0,0,0,0,0,1,0,
550,0,0,14,250,0,9,549,0,0,2,2,0,1,0,1,3,0,0,1,3,0,0,
573,0,0,14,0,0,13,558,0,0,6,0,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,3,0,0,
2,4,0,0,
612,0,0,14,0,0,15,563,0,0,0,0,0,1,0,
627,0,0,15,80,0,9,584,0,0,0,0,0,1,0,
642,0,0,15,0,0,13,592,0,0,2,0,0,1,0,2,3,0,0,2,3,0,0,
665,0,0,15,0,0,15,595,0,0,0,0,0,1,0,
680,0,0,16,223,0,9,620,0,0,1,1,0,1,0,1,3,0,0,
699,0,0,16,0,0,13,628,0,0,9,0,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,97,0,0,2,
3,0,0,2,3,0,0,2,97,0,0,2,3,0,0,
750,0,0,16,0,0,15,633,0,0,0,0,0,1,0,
765,0,0,17,151,0,9,655,0,0,0,0,0,1,0,
780,0,0,17,0,0,13,663,0,0,7,0,0,1,0,2,3,0,0,2,3,0,0,2,97,0,0,2,97,0,0,2,97,0,0,
2,3,0,0,2,97,0,0,
823,0,0,17,0,0,15,668,0,0,0,0,0,1,0,
838,0,0,18,186,0,9,694,0,0,0,0,0,1,0,
853,0,0,18,0,0,13,698,0,0,5,0,0,1,0,2,3,0,0,2,97,0,0,2,97,0,0,2,3,0,0,2,3,0,0,
888,0,0,18,0,0,15,702,0,0,0,0,0,1,0,
903,0,0,19,314,0,9,725,0,0,0,0,0,1,0,
918,0,0,19,0,0,13,734,0,0,5,0,0,1,0,2,97,0,0,2,97,0,0,2,3,0,0,2,3,0,0,2,97,0,0,
953,0,0,19,0,0,15,739,0,0,0,0,0,1,0,
};


/*
 *  procdemo.pc
 *
 *  This program connects to ORACLE, declares and opens a cursor, 
 *  fetches the names, salaries, and commissions of all
 *  salespeople, displays the results, then closes the cursor. 
 */ 

#include <stdio.h>
#include <string.h>
#include <sqlca.h>
#include <stdlib.h>
#include <sqlda.h>
#include <sqlcpr.h>

#define UNAME_LEN      20 
#define PWD_LEN        11 

int list_airplanes();	// (1)
int list_technician();	// (2)
int list_traffic_controller();	// (3) 
int list_test_history();	// (4)
int insert_technician();	// (5)
int delete_airplane();		// (6)
int update_technician_expertise();	// (7)
int high_salary_technician();		// (8)
int technician_expert_model();		// (9)
int total_model_experts();		// (10)
int airplane_tests_details();		// (11)
int traffic_controller_details();	// (12)
int testing_stats();			// (13)
int test_sept_dec_2015();		// (14)

/*
 * Use the precompiler typedef'ing capability to create
 * null-terminated strings for the authentication host
 * variables. (This isn't really necessary--plain char *'s
 * would work as well. This is just for illustration.)
 */
typedef char asciiz[50]; 
typedef char asciiy[150];

/* EXEC SQL TYPE asciiz IS CHARZ(PWD_LEN) REFERENCE; */ 
 
asciiz     username; 
asciiz     password; 

struct model_info {
	int	model_no;
	int	capacity;
	float	weight;	
};

struct model_count_info {
	int	model_no;
	int	total_experts;
};

struct airplane_info {
	long	registration_no;
	int	model_no;
};

struct airplane_model_info {
        long    registration_no;
        int     model_no;
        int     capacity;
        float   weight;
};

struct employee_info {
	long	ssn;
	int	union_no;
	asciiz	first_name;
	asciiz	last_name;
	asciiy	address;
	long	salary;
};

struct technician_info {
	long	ssn;
	int	expert_model;
};

struct traffic_controller_info {
	long	ssn;
	asciiz	med_exam_date;	
};

struct emp_technician_info {
	long    ssn;
        int     union_no;
        asciiz  first_name;
        asciiz  last_name;
        asciiy  address;
        long    salary;
	int     expert_model;
};

struct emp_traffic_info {
        long    ssn;
        int     union_no;
        asciiz  first_name;
        asciiz  last_name;
	asciiy	address;
	long	salary;
	asciiz  med_exam_date;
};

struct tech_model_info {
	long	ssn;
	asciiz first_name;
	asciiz last_name;
	int	expert_model;
        int     capacity;
        float   weight;	
};

struct quality_test_info {
	int	faa_no;
	asciiz	test_name;
	int	max_score;
};

struct test_history_info {
	long	test_id;
	int	faa_no;
	long	airplane_no;
	long	tester_ssn;
	asciiz	test_date;
	int	test_hours;
	int	score;	
};

struct test_history_quality_info {
	long    test_id;
        int     faa_no;
        long    airplane_no;
        long    tester_ssn;
        asciiz  test_date;
        int     test_hours;
        int     score;
        asciiz  test_name;
        int     max_score;	
};

struct test_done_info{
	long	ssn;
	asciiz	first_name;
	asciiz	last_name;
	long	airplane_no;
	int	total;
};

struct test_sept_dec_2015_info {
        asciiz  first_name;
        asciiz  last_name;
	long    airplane_no;	
	int     faa_no;
	asciiz	test_date;
};

void sql_error(msg) 
    char *msg;
{ 
    char err_msg[512];
    size_t buf_len, msg_len;

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    printf("\n%s\n", msg);

/* Call sqlglm() to get the complete text of the
 * error message.
 */
    buf_len = sizeof (err_msg);
    sqlglm(err_msg, &buf_len, &msg_len);
    printf("%.*s\n", msg_len, err_msg);

    /* EXEC SQL ROLLBACK RELEASE; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 0;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    exit(EXIT_FAILURE);
}; 

void main() 
{ 
    int option;
/* Connect to ORACLE. */ 
    strcpy(username, "thdoece467"); 
    strcpy(password, "c16197"); 
 
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("ORACLE error--"); */ 

 
    /* EXEC SQL CONNECT :username IDENTIFIED BY :password; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )20;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)username;
    sqlstm.sqhstl[0] = (unsigned long )11;
    sqlstm.sqhsts[0] = (         int  )11;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)password;
    sqlstm.sqhstl[1] = (unsigned long )11;
    sqlstm.sqhsts[1] = (         int  )11;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}

 
    printf("\nConnected to ORACLE as user: %s\n", username); 

    do {
	printf("Please enter menu option:\n"
		"(1) List all Airplanes and Model Info\n"
		"(2) List all Technician Employee Info\n"
		"(3) List all Traffic Controller Employee Info\n"
		"(4) List all Test History and Quality Test Info\n"
		"(5) Insert a new technician\n"
		"(6) Delete an existing airplane from the database.\n"
		"(7) Update the expertise of an existing technician.\n"
		"(8) List the details of the technician whose salary is greater than the average of the salary of all technicians.\n"
		"(9) List all the model numbers that a given technician has the expertise, along with their capacity and weight information.\n"
		"(10)List the total number of technicians who are experts in each model.\n"
		"(11)List the details (test number, test name, maximum score, etc.) of the FAA tests for a given airplane, sorted by the maximum scores.\n"
		"(12)List the most recent annual medical examination and his/her union membership number for each traffic controller.\n"
		"(13)List the total number of tests done by each technician for a given airplane.\n"
		"(14)List the name of the technician, the registration number of the airplane, and the FAA number of those tests done between September 2015 and December 2015, sorted by the FAA numbers.\n" 
		"(0) Quit\n");
	scanf("%d", &option);
	switch(option) {
		case 1:
			list_airplanes(); 
			break;
		case 2:
			list_technician(); 
			break;
		case 3:
			list_traffic_controller(); 
			break;
		case 4:
			list_test_history();
			break;
		case 5:
			insert_technician();
			break;
		case 6:
			delete_airplane();  
			break;
		case 7:
			update_technician_expertise(); 
			break;
		case 8:
			high_salary_technician(); 
			break;
		case 9:
			technician_expert_model();
			break;
		case 10:
			total_model_experts();
			break;
		case 11:
			airplane_tests_details();
			break;
		case 12:
			traffic_controller_details(); 
			break;
		case 13:
			testing_stats();  
			break;
		case 14:
			test_sept_dec_2015();
			break;
		default:
			goto end;
			break;		
	}
    } while(option != 0);
    end:
    printf("\nGOOD-BYE!!\n\n");
    
    /* EXEC SQL COMMIT WORK RELEASE; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )51;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


    
    exit(EXIT_SUCCESS); 
}

int list_airplanes() {
	struct airplane_model_info *airplane_model_rec_ptr;

	if((airplane_model_rec_ptr = 
		(struct airplane_model_info *) malloc(sizeof(struct airplane_model_info)))== 0) {
		fprintf(stderr, "Memory allocation error.\n");
        	exit(EXIT_FAILURE);
	}
    	/* EXEC SQL DECLARE airplane_model_cursor CURSOR FOR
        SELECT A.registrationNo, A.modelNo, M.capacity, M.weight
        FROM Airplane as A, Model as M
	WHERE A.modelNo = M.modelNo; */ 
	
	
	/* Open the cursor. */
    	/* EXEC SQL OPEN airplane_model_cursor; */ 

{
     struct sqlexd sqlstm;
     sqlstm.sqlvsn = 13;
     sqlstm.arrsiz = 4;
     sqlstm.sqladtp = &sqladt;
     sqlstm.sqltdsp = &sqltds;
     sqlstm.stmt = sq0004;
     sqlstm.iters = (unsigned int  )1;
     sqlstm.offset = (unsigned int  )66;
     sqlstm.selerr = (unsigned short)1;
     sqlstm.sqlpfmem = (unsigned int  )0;
     sqlstm.cud = sqlcud0;
     sqlstm.sqlest = (unsigned char  *)&sqlca;
     sqlstm.sqlety = (unsigned short)4352;
     sqlstm.occurs = (unsigned int  )0;
     sqlstm.sqcmod = (unsigned int )0;
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
     if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



    	printf("\n\nQuery 1: List full details of every airplane--\n\n");
    	printf("%-20s %-20s %-20s %-20s\n", "RegistrationNo", "ModelNo", "Capacity", "Weight");
    	printf(" %-20s %-20s %-20s %-20s\n","----------", "----------", "----------", "----------\n");

    	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 


    	for (;;) {
        	/* EXEC SQL FETCH airplane_model_cursor INTO :airplane_model_rec_ptr; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 13;
         sqlstm.arrsiz = 4;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )81;
         sqlstm.selerr = (unsigned short)1;
         sqlstm.sqlpfmem = (unsigned int  )0;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqfoff = (         int )0;
         sqlstm.sqfmod = (unsigned int )2;
         sqlstm.sqhstv[0] = (unsigned char  *)&airplane_model_rec_ptr->registration_no;
         sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         short *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned long )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (unsigned char  *)&airplane_model_rec_ptr->model_no;
         sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         short *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned long )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (unsigned char  *)&airplane_model_rec_ptr->capacity;
         sqlstm.sqhstl[2] = (unsigned long )sizeof(int);
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         short *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned long )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (unsigned char  *)&airplane_model_rec_ptr->weight;
         sqlstm.sqhstl[3] = (unsigned long )sizeof(float);
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         short *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned long )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
         if (sqlca.sqlcode == 1403) break;
         if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


        	printf("%-20ld %-20d %-20d %-20.2f\n\n", airplane_model_rec_ptr->registration_no, airplane_model_rec_ptr->model_no, airplane_model_rec_ptr->capacity, airplane_model_rec_ptr->weight);
    	}

	/* Close the cursor. */
	/* EXEC SQL CLOSE airplane_model_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )112;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



	free(airplane_model_rec_ptr);

	return 0;
}

int list_technician() {
        struct emp_technician_info *emp_technician_rec_ptr;

        if((emp_technician_rec_ptr =
                (struct emp_technician_info *) malloc(sizeof(struct emp_technician_info)))== 0) {
                fprintf(stderr, "Memory allocation error.\n");
                exit(EXIT_FAILURE);
        }
        /* EXEC SQL DECLARE emp_technician_cursor CURSOR FOR
        SELECT E.ssn, E.unionNo, E.firstName, E.lastName, E.address, E.salary, T.expertModel
        FROM Employee as E, Technician as T
        WHERE E.ssn = T.ssn; */ 

	
        /* Open the cursor. */
        /* EXEC SQL OPEN emp_technician_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = sq0005;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )127;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



        printf("\n\nQuery 2: List all Technician Employee Info--\n\n");
        printf("%-20s %-20s %-20s %-20s %-20s %-20s %-20s\n", "SSN", "UnionNo", "FirstName", "LastName", "Address", "Salary", "ModelOfExpertise");
        printf(" %-20s %-20s %-20s %-20s %-20s %-20s %-20s\n","----------", "----------", "----------","----------", "----------", "----------", "----------\n");

        /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


        for (;;) {
                /* EXEC SQL FETCH emp_technician_cursor INTO :emp_technician_rec_ptr; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 7;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )142;
                sqlstm.selerr = (unsigned short)1;
                sqlstm.sqlpfmem = (unsigned int  )0;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqfoff = (         int )0;
                sqlstm.sqfmod = (unsigned int )2;
                sqlstm.sqhstv[0] = (unsigned char  *)&emp_technician_rec_ptr->ssn;
                sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         short *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned long )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (unsigned char  *)&emp_technician_rec_ptr->union_no;
                sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         short *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned long )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[2] = (unsigned char  *)emp_technician_rec_ptr->first_name;
                sqlstm.sqhstl[2] = (unsigned long )11;
                sqlstm.sqhsts[2] = (         int  )0;
                sqlstm.sqindv[2] = (         short *)0;
                sqlstm.sqinds[2] = (         int  )0;
                sqlstm.sqharm[2] = (unsigned long )0;
                sqlstm.sqadto[2] = (unsigned short )0;
                sqlstm.sqtdso[2] = (unsigned short )0;
                sqlstm.sqhstv[3] = (unsigned char  *)emp_technician_rec_ptr->last_name;
                sqlstm.sqhstl[3] = (unsigned long )11;
                sqlstm.sqhsts[3] = (         int  )0;
                sqlstm.sqindv[3] = (         short *)0;
                sqlstm.sqinds[3] = (         int  )0;
                sqlstm.sqharm[3] = (unsigned long )0;
                sqlstm.sqadto[3] = (unsigned short )0;
                sqlstm.sqtdso[3] = (unsigned short )0;
                sqlstm.sqhstv[4] = (unsigned char  *)emp_technician_rec_ptr->address;
                sqlstm.sqhstl[4] = (unsigned long )150;
                sqlstm.sqhsts[4] = (         int  )0;
                sqlstm.sqindv[4] = (         short *)0;
                sqlstm.sqinds[4] = (         int  )0;
                sqlstm.sqharm[4] = (unsigned long )0;
                sqlstm.sqadto[4] = (unsigned short )0;
                sqlstm.sqtdso[4] = (unsigned short )0;
                sqlstm.sqhstv[5] = (unsigned char  *)&emp_technician_rec_ptr->salary;
                sqlstm.sqhstl[5] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[5] = (         int  )0;
                sqlstm.sqindv[5] = (         short *)0;
                sqlstm.sqinds[5] = (         int  )0;
                sqlstm.sqharm[5] = (unsigned long )0;
                sqlstm.sqadto[5] = (unsigned short )0;
                sqlstm.sqtdso[5] = (unsigned short )0;
                sqlstm.sqhstv[6] = (unsigned char  *)&emp_technician_rec_ptr->expert_model;
                sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[6] = (         int  )0;
                sqlstm.sqindv[6] = (         short *)0;
                sqlstm.sqinds[6] = (         int  )0;
                sqlstm.sqharm[6] = (unsigned long )0;
                sqlstm.sqadto[6] = (unsigned short )0;
                sqlstm.sqtdso[6] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode == 1403) break;
                if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


                printf("%-20ld %-20d %-20s %-20s %-50s %-20ld %-20d\n\n", emp_technician_rec_ptr->ssn, emp_technician_rec_ptr->union_no, emp_technician_rec_ptr->first_name, emp_technician_rec_ptr->last_name, emp_technician_rec_ptr->address, emp_technician_rec_ptr->salary, emp_technician_rec_ptr->expert_model);
        }

        /* Close the cursor. */
        /* EXEC SQL CLOSE emp_technician_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )185;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



        free(emp_technician_rec_ptr);

        return 0;
}

int list_traffic_controller() {
        struct emp_traffic_info *emp_traffic_rec_ptr;

        if((emp_traffic_rec_ptr =
                (struct emp_traffic_info *) malloc(sizeof(struct emp_traffic_info)))== 0) {
                fprintf(stderr, "Memory allocation error.\n");
                exit(EXIT_FAILURE);
        }
        /* EXEC SQL DECLARE emp_traffic_cursor CURSOR FOR
        SELECT E.ssn, E.unionNo, E.firstName, E.lastName, E.address, E.salary, C.medExamDate
        FROM Employee as E, TrafficController as C
        WHERE E.ssn = C.ssn; */ 


        /* Open the cursor. */
        /* EXEC SQL OPEN emp_traffic_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = sq0006;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )200;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


     
	printf("%-20s %-20s %-20s %-20s %-20s %-20s %-20s\n", "SSN", "UnionNo", "FirstName", "LastName", "Address", "Salary", "MedicalExamDate");
	printf("%-20s %-20s %-20s %-20s %-20s %-20s %-20s\n", "----------", "----------", "----------", "----------", "----------", "----------", "----------\n");

	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 


        for (;;) {
                /* EXEC SQL FETCH emp_traffic_cursor INTO :emp_traffic_rec_ptr; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 7;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )215;
                sqlstm.selerr = (unsigned short)1;
                sqlstm.sqlpfmem = (unsigned int  )0;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqfoff = (         int )0;
                sqlstm.sqfmod = (unsigned int )2;
                sqlstm.sqhstv[0] = (unsigned char  *)&emp_traffic_rec_ptr->ssn;
                sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         short *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned long )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (unsigned char  *)&emp_traffic_rec_ptr->union_no;
                sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         short *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned long )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[2] = (unsigned char  *)emp_traffic_rec_ptr->first_name;
                sqlstm.sqhstl[2] = (unsigned long )11;
                sqlstm.sqhsts[2] = (         int  )0;
                sqlstm.sqindv[2] = (         short *)0;
                sqlstm.sqinds[2] = (         int  )0;
                sqlstm.sqharm[2] = (unsigned long )0;
                sqlstm.sqadto[2] = (unsigned short )0;
                sqlstm.sqtdso[2] = (unsigned short )0;
                sqlstm.sqhstv[3] = (unsigned char  *)emp_traffic_rec_ptr->last_name;
                sqlstm.sqhstl[3] = (unsigned long )11;
                sqlstm.sqhsts[3] = (         int  )0;
                sqlstm.sqindv[3] = (         short *)0;
                sqlstm.sqinds[3] = (         int  )0;
                sqlstm.sqharm[3] = (unsigned long )0;
                sqlstm.sqadto[3] = (unsigned short )0;
                sqlstm.sqtdso[3] = (unsigned short )0;
                sqlstm.sqhstv[4] = (unsigned char  *)emp_traffic_rec_ptr->address;
                sqlstm.sqhstl[4] = (unsigned long )150;
                sqlstm.sqhsts[4] = (         int  )0;
                sqlstm.sqindv[4] = (         short *)0;
                sqlstm.sqinds[4] = (         int  )0;
                sqlstm.sqharm[4] = (unsigned long )0;
                sqlstm.sqadto[4] = (unsigned short )0;
                sqlstm.sqtdso[4] = (unsigned short )0;
                sqlstm.sqhstv[5] = (unsigned char  *)&emp_traffic_rec_ptr->salary;
                sqlstm.sqhstl[5] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[5] = (         int  )0;
                sqlstm.sqindv[5] = (         short *)0;
                sqlstm.sqinds[5] = (         int  )0;
                sqlstm.sqharm[5] = (unsigned long )0;
                sqlstm.sqadto[5] = (unsigned short )0;
                sqlstm.sqtdso[5] = (unsigned short )0;
                sqlstm.sqhstv[6] = (unsigned char  *)emp_traffic_rec_ptr->med_exam_date;
                sqlstm.sqhstl[6] = (unsigned long )11;
                sqlstm.sqhsts[6] = (         int  )0;
                sqlstm.sqindv[6] = (         short *)0;
                sqlstm.sqinds[6] = (         int  )0;
                sqlstm.sqharm[6] = (unsigned long )0;
                sqlstm.sqadto[6] = (unsigned short )0;
                sqlstm.sqtdso[6] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode == 1403) break;
                if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


                printf("%-20ld %-20d %-20s %-20s %-50s %-20ld %-20s\n\n", emp_traffic_rec_ptr->ssn, emp_traffic_rec_ptr->union_no, emp_traffic_rec_ptr->first_name, emp_traffic_rec_ptr->last_name, emp_traffic_rec_ptr->address, emp_traffic_rec_ptr->salary, emp_traffic_rec_ptr->med_exam_date);
        }

        /* Close the cursor. */
        /* EXEC SQL CLOSE emp_traffic_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )258;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



        free(emp_traffic_rec_ptr);
        return 0;
}

int list_test_history() {
        struct test_history_quality_info *test_history_quality_rec_ptr;

        if((test_history_quality_rec_ptr =
                (struct test_history_quality_info *) malloc(sizeof(struct test_history_quality_info)))== 0) {
                fprintf(stderr, "Memory allocation error.\n");
                exit(EXIT_FAILURE);
        }
        /* EXEC SQL DECLARE test_history_quality_cursor CURSOR FOR
        SELECT H.testId, H.faaNo, H.airplaneNo, H.testerSsn, H.testDate, H.testHours, H.score, Q.name, Q.maxScore 
        FROM TestHistory as H, QualityTest as Q
        WHERE H.faaNo = Q.faaNo; */ 


        /* Open the cursor. */
        /* EXEC SQL OPEN test_history_quality_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 7;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = sq0007;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )273;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



	printf("%-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s\n", "TestID", "FAANo", "AirplaneNo", "TesterSSN", "TestDate", "TestHours", "TestScore", "TestName", "MaxScore");
	printf("%-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s\n", "----------","----------","----------","----------","----------","----------","----------","----------","----------\n");
	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 


        for (;;) {
                /* EXEC SQL FETCH test_history_quality_cursor INTO :test_history_quality_rec_ptr; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )288;
                sqlstm.selerr = (unsigned short)1;
                sqlstm.sqlpfmem = (unsigned int  )0;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqfoff = (         int )0;
                sqlstm.sqfmod = (unsigned int )2;
                sqlstm.sqhstv[0] = (unsigned char  *)&test_history_quality_rec_ptr->test_id;
                sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         short *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned long )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (unsigned char  *)&test_history_quality_rec_ptr->faa_no;
                sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         short *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned long )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[2] = (unsigned char  *)&test_history_quality_rec_ptr->airplane_no;
                sqlstm.sqhstl[2] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[2] = (         int  )0;
                sqlstm.sqindv[2] = (         short *)0;
                sqlstm.sqinds[2] = (         int  )0;
                sqlstm.sqharm[2] = (unsigned long )0;
                sqlstm.sqadto[2] = (unsigned short )0;
                sqlstm.sqtdso[2] = (unsigned short )0;
                sqlstm.sqhstv[3] = (unsigned char  *)&test_history_quality_rec_ptr->tester_ssn;
                sqlstm.sqhstl[3] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[3] = (         int  )0;
                sqlstm.sqindv[3] = (         short *)0;
                sqlstm.sqinds[3] = (         int  )0;
                sqlstm.sqharm[3] = (unsigned long )0;
                sqlstm.sqadto[3] = (unsigned short )0;
                sqlstm.sqtdso[3] = (unsigned short )0;
                sqlstm.sqhstv[4] = (unsigned char  *)test_history_quality_rec_ptr->test_date;
                sqlstm.sqhstl[4] = (unsigned long )11;
                sqlstm.sqhsts[4] = (         int  )0;
                sqlstm.sqindv[4] = (         short *)0;
                sqlstm.sqinds[4] = (         int  )0;
                sqlstm.sqharm[4] = (unsigned long )0;
                sqlstm.sqadto[4] = (unsigned short )0;
                sqlstm.sqtdso[4] = (unsigned short )0;
                sqlstm.sqhstv[5] = (unsigned char  *)&test_history_quality_rec_ptr->test_hours;
                sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[5] = (         int  )0;
                sqlstm.sqindv[5] = (         short *)0;
                sqlstm.sqinds[5] = (         int  )0;
                sqlstm.sqharm[5] = (unsigned long )0;
                sqlstm.sqadto[5] = (unsigned short )0;
                sqlstm.sqtdso[5] = (unsigned short )0;
                sqlstm.sqhstv[6] = (unsigned char  *)&test_history_quality_rec_ptr->score;
                sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[6] = (         int  )0;
                sqlstm.sqindv[6] = (         short *)0;
                sqlstm.sqinds[6] = (         int  )0;
                sqlstm.sqharm[6] = (unsigned long )0;
                sqlstm.sqadto[6] = (unsigned short )0;
                sqlstm.sqtdso[6] = (unsigned short )0;
                sqlstm.sqhstv[7] = (unsigned char  *)test_history_quality_rec_ptr->test_name;
                sqlstm.sqhstl[7] = (unsigned long )11;
                sqlstm.sqhsts[7] = (         int  )0;
                sqlstm.sqindv[7] = (         short *)0;
                sqlstm.sqinds[7] = (         int  )0;
                sqlstm.sqharm[7] = (unsigned long )0;
                sqlstm.sqadto[7] = (unsigned short )0;
                sqlstm.sqtdso[7] = (unsigned short )0;
                sqlstm.sqhstv[8] = (unsigned char  *)&test_history_quality_rec_ptr->max_score;
                sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[8] = (         int  )0;
                sqlstm.sqindv[8] = (         short *)0;
                sqlstm.sqinds[8] = (         int  )0;
                sqlstm.sqharm[8] = (unsigned long )0;
                sqlstm.sqadto[8] = (unsigned short )0;
                sqlstm.sqtdso[8] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode == 1403) break;
                if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


        printf(" %-20ld %-20d %-20ld %-20ld %-20s %-20d %-20d %-20s %-20d\n", test_history_quality_rec_ptr->test_id, test_history_quality_rec_ptr->faa_no, test_history_quality_rec_ptr->airplane_no, test_history_quality_rec_ptr->tester_ssn, test_history_quality_rec_ptr->test_date, test_history_quality_rec_ptr->test_hours, test_history_quality_rec_ptr->score, test_history_quality_rec_ptr->test_name, test_history_quality_rec_ptr->max_score);
	}

        /* Close the cursor. */
        /* EXEC SQL CLOSE test_history_quality_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )339;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



        free(test_history_quality_rec_ptr);
        return 0;
}

int insert_technician() {
	char * pos;
	struct emp_technician_info *input;

        if((input =
                (struct emp_technician_info *) malloc(sizeof(struct emp_technician_info)))== 0) {
                fprintf(stderr, "Memory allocation error.\n");
               exit(EXIT_FAILURE);
        }

	// Prompt user to enter technician's values
	printf("Enter technician's SSN (9-digit):\n ");
	scanf("%ld", &(input->ssn));
	printf("Enter technician's Union Number (4-digit at most):\n ");
	scanf("%d%*c", &(input->union_no));
	
	printf("Enter technician's First Name:\n ");
	fgets(input->first_name, sizeof(input->first_name), stdin);
	printf("Enter technician's Last Name:\n ");
	fgets(input->last_name, sizeof(input->last_name), stdin);
	printf("Enter technician's Address:\n ");
	fgets(input->address, sizeof(input->address), stdin);
	printf("Enter technician's Salary:\n ");
	scanf("%ld", &(input->salary));
	printf("Enter technician's Model of Expertise:\n ");
	scanf("%d", &(input->expert_model));
      	
	// Replacing the \n with \0 in String inputs
	if ((pos = strchr(input->first_name, '\n')) != NULL) {
		*pos = '\0';
	}
	if ((pos = strchr(input->last_name, '\n')) != NULL) {
		*pos = '\0';
	}
	if ((pos = strchr(input->address, '\n')) != NULL) {
		*pos = '\0';
	}

	printf("Insert: %ld %d %s %s %s %ld %d\n", input->ssn, input->union_no, input->first_name, input->last_name, input->address, input->salary, input->expert_model);
 
	for(;;) {
	 
		/* EXEC SQL INSERT INTO Employee (ssn, unionNo, firstName, lastName, address, salary) VALUES(:input->ssn, :input->union_no, :input->first_name, :input->last_name, :input->address, :input->salary); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into Employee (ssn,unionNo,firstName,lastName,addres\
s,salary) values (:b0,:b1,:b2,:b3,:b4,:b5)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )354;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (unsigned char  *)&(input->ssn);
  sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&(input->union_no);
  sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)(input->first_name);
  sqlstm.sqhstl[2] = (unsigned long )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)(input->last_name);
  sqlstm.sqhstl[3] = (unsigned long )11;
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (unsigned char  *)(input->address);
  sqlstm.sqhstl[4] = (unsigned long )150;
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqhstv[5] = (unsigned char  *)&(input->salary);
  sqlstm.sqhstl[5] = (unsigned long )sizeof(long);
  sqlstm.sqhsts[5] = (         int  )0;
  sqlstm.sqindv[5] = (         short *)0;
  sqlstm.sqinds[5] = (         int  )0;
  sqlstm.sqharm[5] = (unsigned long )0;
  sqlstm.sqadto[5] = (unsigned short )0;
  sqlstm.sqtdso[5] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


		/* EXEC SQL INSERT INTO Technician (ssn, expertModel) VALUES(:input->ssn, :input->expert_model); */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "insert into Technician (ssn,expertModel) values (:b0,:b1)";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )393;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (unsigned char  *)&(input->ssn);
  sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&(input->expert_model);
  sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


		break;
	}
        
	printf("INSERTION SUCCESSFUL!\n");
	free(input);

	return 0;
}

int delete_airplane() {
	long reg_no;

	printf("Enger the Registration Number of the airplane you want to delete:\n");
	scanf("%ld%*c", &reg_no);

	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 

	for(;;) {
		/* EXEC SQL DELETE FROM TestHistory WHERE airplaneNo = :reg_no; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from TestHistory  where airplaneNo=:b0";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )416;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (unsigned char  *)&reg_no;
  sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


		/* EXEC SQL DELETE FROM Airplane WHERE registrationNo = :reg_no; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "delete  from Airplane  where registrationNo=:b0";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )435;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (unsigned char  *)&reg_no;
  sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


	}        

	printf("DELETION SUCCESSFUL!\n");

	return 0;
}

int update_technician_expertise() {
	long my_ssn;
	int my_model_no;

	printf("Enter the SSN of the technician:\n");
	scanf("%ld", &my_ssn);
	printf("Enter the new model of expertise:\n");
	scanf("%d", &my_model_no);
	for(;;) {
		/* EXEC SQL UPDATE Technician 
			SET expertModel = :my_model_no
			WHERE ssn = :my_ssn; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "update Technician  set expertModel=:b0 where ssn=:b1";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )454;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (unsigned char  *)&my_model_no;
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&my_ssn;
  sqlstm.sqhstl[1] = (unsigned long )sizeof(long);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}

 
		break;
	}
	printf("UPDATE SUCCESSFULL!\n");

        return 0;
}

int high_salary_technician() {

	struct emp_technician_info *emp_technician_rec_ptr;

        if((emp_technician_rec_ptr =
                (struct emp_technician_info  *) malloc(sizeof(struct emp_technician_info )))== 0) {
                fprintf(stderr, "Memory allocation error.\n");
                exit(EXIT_FAILURE);
        }
        /* EXEC SQL DECLARE emp_technician_cursor2 CURSOR FOR
        SELECT Employee.ssn, Employee.unionNo, Employee.firstName, Employee.lastName, Employee.address, Employee.salary, Technician.expertModel
        FROM Employee, Technician 
        WHERE Employee.ssn = Technician.ssn
		AND Employee.salary > (SELECT AVG(Salary) FROM Employee, Technician WHERE Employee.ssn = Technician.ssn); */ 


        /* Open the cursor. */
        /* EXEC SQL OPEN emp_technician_cursor2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = sq0013;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )477;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


	
	printf("\n\nQuery8: List the details of technicians whose salary is greater than the average of the salary of all technicians--\n\n");
	printf("%-20s %-20s %-20s %-20s %-20s %-20s %-20s\n", "SSN", "UnionNo", "FirstName", "LastName", "Address", "Salary", "ModelofExpertise");
	printf("%-20s %-20s %-20s %-20s %-20s %-20s %-20s\n", "----------", "----------", "----------", "----------", "----------", "----------", "----------\n" );
        /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


        for (;;) {
                /* EXEC SQL FETCH emp_technician_cursor2 INTO :emp_technician_rec_ptr; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )492;
                sqlstm.selerr = (unsigned short)1;
                sqlstm.sqlpfmem = (unsigned int  )0;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqfoff = (         int )0;
                sqlstm.sqfmod = (unsigned int )2;
                sqlstm.sqhstv[0] = (unsigned char  *)&emp_technician_rec_ptr->ssn;
                sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         short *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned long )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (unsigned char  *)&emp_technician_rec_ptr->union_no;
                sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         short *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned long )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[2] = (unsigned char  *)emp_technician_rec_ptr->first_name;
                sqlstm.sqhstl[2] = (unsigned long )11;
                sqlstm.sqhsts[2] = (         int  )0;
                sqlstm.sqindv[2] = (         short *)0;
                sqlstm.sqinds[2] = (         int  )0;
                sqlstm.sqharm[2] = (unsigned long )0;
                sqlstm.sqadto[2] = (unsigned short )0;
                sqlstm.sqtdso[2] = (unsigned short )0;
                sqlstm.sqhstv[3] = (unsigned char  *)emp_technician_rec_ptr->last_name;
                sqlstm.sqhstl[3] = (unsigned long )11;
                sqlstm.sqhsts[3] = (         int  )0;
                sqlstm.sqindv[3] = (         short *)0;
                sqlstm.sqinds[3] = (         int  )0;
                sqlstm.sqharm[3] = (unsigned long )0;
                sqlstm.sqadto[3] = (unsigned short )0;
                sqlstm.sqtdso[3] = (unsigned short )0;
                sqlstm.sqhstv[4] = (unsigned char  *)emp_technician_rec_ptr->address;
                sqlstm.sqhstl[4] = (unsigned long )150;
                sqlstm.sqhsts[4] = (         int  )0;
                sqlstm.sqindv[4] = (         short *)0;
                sqlstm.sqinds[4] = (         int  )0;
                sqlstm.sqharm[4] = (unsigned long )0;
                sqlstm.sqadto[4] = (unsigned short )0;
                sqlstm.sqtdso[4] = (unsigned short )0;
                sqlstm.sqhstv[5] = (unsigned char  *)&emp_technician_rec_ptr->salary;
                sqlstm.sqhstl[5] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[5] = (         int  )0;
                sqlstm.sqindv[5] = (         short *)0;
                sqlstm.sqinds[5] = (         int  )0;
                sqlstm.sqharm[5] = (unsigned long )0;
                sqlstm.sqadto[5] = (unsigned short )0;
                sqlstm.sqtdso[5] = (unsigned short )0;
                sqlstm.sqhstv[6] = (unsigned char  *)&emp_technician_rec_ptr->expert_model;
                sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[6] = (         int  )0;
                sqlstm.sqindv[6] = (         short *)0;
                sqlstm.sqinds[6] = (         int  )0;
                sqlstm.sqharm[6] = (unsigned long )0;
                sqlstm.sqadto[6] = (unsigned short )0;
                sqlstm.sqtdso[6] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode == 1403) break;
                if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


                printf("%-20ld %-20d %-20s %-20s %-50s %-20ld %-20d\n\n", emp_technician_rec_ptr->ssn, emp_technician_rec_ptr->union_no, emp_technician_rec_ptr->first_name, emp_technician_rec_ptr->last_name, emp_technician_rec_ptr->address, emp_technician_rec_ptr->salary, emp_technician_rec_ptr->expert_model);
        }

        /* Close the cursor. */
        /* EXEC SQL CLOSE emp_technician_cursor2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )535;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



        free(emp_technician_rec_ptr);
	return 0;
}

int technician_expert_model() {
	long my_ssn;
	
	printf("Enter the technician's SSN (9-digit):\n");
	scanf("%ld", &my_ssn);

        struct tech_model_info *tech_model_rec_ptr;

        if((tech_model_rec_ptr =
                (struct tech_model_info  *) malloc(sizeof(struct tech_model_info )))== 0) {
                fprintf(stderr, "Memory allocation error.\n");
                exit(EXIT_FAILURE);
        }
        /* EXEC SQL DECLARE tech_model_cursor CURSOR FOR
        SELECT Technician.ssn, Employee.firstName, Employee.lastName, Technician.expertModel, Model.capacity, Model.weight
        FROM Employee, Technician, Model
        WHERE Technician.ssn = :my_ssn 
			AND Employee.ssn = :my_ssn
			AND Technician.expertModel = Model.modelNo; */ 


        /* Open the cursor. */
        /* EXEC SQL OPEN tech_model_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = sq0014;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )550;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlstm.sqhstv[0] = (unsigned char  *)&my_ssn;
        sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (unsigned char  *)&my_ssn;
        sqlstm.sqhstl[1] = (unsigned long )sizeof(long);
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         short *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned long )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



	printf("\n\nQuery 9: List all the model numbers that a given technician has expertise, along with their capacity and weight information--\n\n");
	printf("%-20s %-20s %-20s %-20s %-20s %-20s\n", "SSN", "FirstName", "LastName", "ModelOfExpertise", "Capacity", "Weight");
	printf("%-20s %-20s %-20s %-20s %-20s %-20s\n", "----------", "----------", "----------", "----------", "----------", "----------\n");

        /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

        
        for (;;) {
                /* EXEC SQL FETCH tech_model_cursor INTO :tech_model_rec_ptr; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )573;
                sqlstm.selerr = (unsigned short)1;
                sqlstm.sqlpfmem = (unsigned int  )0;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqfoff = (         int )0;
                sqlstm.sqfmod = (unsigned int )2;
                sqlstm.sqhstv[0] = (unsigned char  *)&tech_model_rec_ptr->ssn;
                sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         short *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned long )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (unsigned char  *)tech_model_rec_ptr->first_name;
                sqlstm.sqhstl[1] = (unsigned long )11;
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         short *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned long )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[2] = (unsigned char  *)tech_model_rec_ptr->last_name;
                sqlstm.sqhstl[2] = (unsigned long )11;
                sqlstm.sqhsts[2] = (         int  )0;
                sqlstm.sqindv[2] = (         short *)0;
                sqlstm.sqinds[2] = (         int  )0;
                sqlstm.sqharm[2] = (unsigned long )0;
                sqlstm.sqadto[2] = (unsigned short )0;
                sqlstm.sqtdso[2] = (unsigned short )0;
                sqlstm.sqhstv[3] = (unsigned char  *)&tech_model_rec_ptr->expert_model;
                sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[3] = (         int  )0;
                sqlstm.sqindv[3] = (         short *)0;
                sqlstm.sqinds[3] = (         int  )0;
                sqlstm.sqharm[3] = (unsigned long )0;
                sqlstm.sqadto[3] = (unsigned short )0;
                sqlstm.sqtdso[3] = (unsigned short )0;
                sqlstm.sqhstv[4] = (unsigned char  *)&tech_model_rec_ptr->capacity;
                sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[4] = (         int  )0;
                sqlstm.sqindv[4] = (         short *)0;
                sqlstm.sqinds[4] = (         int  )0;
                sqlstm.sqharm[4] = (unsigned long )0;
                sqlstm.sqadto[4] = (unsigned short )0;
                sqlstm.sqtdso[4] = (unsigned short )0;
                sqlstm.sqhstv[5] = (unsigned char  *)&tech_model_rec_ptr->weight;
                sqlstm.sqhstl[5] = (unsigned long )sizeof(float);
                sqlstm.sqhsts[5] = (         int  )0;
                sqlstm.sqindv[5] = (         short *)0;
                sqlstm.sqinds[5] = (         int  )0;
                sqlstm.sqharm[5] = (unsigned long )0;
                sqlstm.sqadto[5] = (unsigned short )0;
                sqlstm.sqtdso[5] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode == 1403) break;
                if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}

             
                printf("%-20ld %-20s %-20s %-20d %-20d %-20.2f\n\n", tech_model_rec_ptr->ssn, tech_model_rec_ptr->first_name, tech_model_rec_ptr->last_name, tech_model_rec_ptr->expert_model, tech_model_rec_ptr->capacity, tech_model_rec_ptr->weight);
	}
        
        /* Close the cursor. */
        /* EXEC SQL CLOSE tech_model_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )612;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



        free(tech_model_rec_ptr);	

        return 0;
}

int total_model_experts() {
	
	struct model_count_info *model_count_rec_ptr;

        if((model_count_rec_ptr =
                (struct model_count_info  *) malloc(sizeof(struct model_count_info )))== 0) {
                fprintf(stderr, "Memory allocation error.\n");
                exit(EXIT_FAILURE);
        }

	/* EXEC SQL DECLARE model_count_cursor CURSOR FOR
	SELECT expertModel, COUNT(ssn) FROM Technician
	GROUP BY expertModel; */ 


	/* EXEC SQL OPEN model_count_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0015;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )627;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



	printf("\n\nQuery 10: List the total number of technicians who are experts in each model\n");
	printf("%-20s %-20s\n", "Model", "Total Experts");
	printf("%-20s %-20s\n", "----------", "----------\n");

	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 

	for(;;) {
		/* EXEC SQL FETCH model_count_cursor INTO: model_count_rec_ptr; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )642;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&model_count_rec_ptr->model_no;
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)&model_count_rec_ptr->total_experts;
  sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


		printf("%-20d %-20d\n", model_count_rec_ptr->model_no, model_count_rec_ptr->total_experts);
	}
	/* EXEC SQL CLOSE model_count_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )665;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


	free(model_count_rec_ptr);
        return 0;
}

int airplane_tests_details() {
	long my_airplane;

	printf("Enter the Airplane's Registration Number (9-digit):\n");
	scanf("%ld", &my_airplane);

struct test_history_quality_info *airplane_test_rec_ptr;
        if((airplane_test_rec_ptr =
                (struct test_history_quality_info *) malloc(sizeof(struct test_history_quality_info)))== 0) {
                fprintf(stderr, "Memory allocation error.\n");
                exit(EXIT_FAILURE);
        }
        /* EXEC SQL DECLARE airplane_test_cursor CURSOR FOR
        SELECT H.testId, H.faaNo, H.airplaneNo, H.testerSsn, H.testDate, H.testHours, H.score, Q.name, Q.maxScore
        FROM TestHistory as H, QualityTest as Q
        WHERE H.airplaneNo = :my_airplane
		AND H.faaNo = Q.faaNo
	ORDER BY Q.maxScore DESC; */ 


        /* Open the cursor. */
        /* EXEC SQL OPEN airplane_test_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = sq0016;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )680;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlstm.sqhstv[0] = (unsigned char  *)&my_airplane;
        sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         short *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned long )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



	printf("%-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s\n", "TestID", "FAANo", "AirplaneNo", "TesterSSN", "TestDate", "TestHours", "TestScore", "TestName", "MaxScore");
	printf("%-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s %-20s\n", "----------",  "----------", "----------", "----------", "----------", "----------", "----------", "----------", "----------\n");
	
	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 


        for (;;) {
                /* EXEC SQL FETCH airplane_test_cursor INTO :airplane_test_rec_ptr; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )699;
                sqlstm.selerr = (unsigned short)1;
                sqlstm.sqlpfmem = (unsigned int  )0;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqfoff = (         int )0;
                sqlstm.sqfmod = (unsigned int )2;
                sqlstm.sqhstv[0] = (unsigned char  *)&airplane_test_rec_ptr->test_id;
                sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         short *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned long )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (unsigned char  *)&airplane_test_rec_ptr->faa_no;
                sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         short *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned long )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[2] = (unsigned char  *)&airplane_test_rec_ptr->airplane_no;
                sqlstm.sqhstl[2] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[2] = (         int  )0;
                sqlstm.sqindv[2] = (         short *)0;
                sqlstm.sqinds[2] = (         int  )0;
                sqlstm.sqharm[2] = (unsigned long )0;
                sqlstm.sqadto[2] = (unsigned short )0;
                sqlstm.sqtdso[2] = (unsigned short )0;
                sqlstm.sqhstv[3] = (unsigned char  *)&airplane_test_rec_ptr->tester_ssn;
                sqlstm.sqhstl[3] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[3] = (         int  )0;
                sqlstm.sqindv[3] = (         short *)0;
                sqlstm.sqinds[3] = (         int  )0;
                sqlstm.sqharm[3] = (unsigned long )0;
                sqlstm.sqadto[3] = (unsigned short )0;
                sqlstm.sqtdso[3] = (unsigned short )0;
                sqlstm.sqhstv[4] = (unsigned char  *)airplane_test_rec_ptr->test_date;
                sqlstm.sqhstl[4] = (unsigned long )11;
                sqlstm.sqhsts[4] = (         int  )0;
                sqlstm.sqindv[4] = (         short *)0;
                sqlstm.sqinds[4] = (         int  )0;
                sqlstm.sqharm[4] = (unsigned long )0;
                sqlstm.sqadto[4] = (unsigned short )0;
                sqlstm.sqtdso[4] = (unsigned short )0;
                sqlstm.sqhstv[5] = (unsigned char  *)&airplane_test_rec_ptr->test_hours;
                sqlstm.sqhstl[5] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[5] = (         int  )0;
                sqlstm.sqindv[5] = (         short *)0;
                sqlstm.sqinds[5] = (         int  )0;
                sqlstm.sqharm[5] = (unsigned long )0;
                sqlstm.sqadto[5] = (unsigned short )0;
                sqlstm.sqtdso[5] = (unsigned short )0;
                sqlstm.sqhstv[6] = (unsigned char  *)&airplane_test_rec_ptr->score;
                sqlstm.sqhstl[6] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[6] = (         int  )0;
                sqlstm.sqindv[6] = (         short *)0;
                sqlstm.sqinds[6] = (         int  )0;
                sqlstm.sqharm[6] = (unsigned long )0;
                sqlstm.sqadto[6] = (unsigned short )0;
                sqlstm.sqtdso[6] = (unsigned short )0;
                sqlstm.sqhstv[7] = (unsigned char  *)airplane_test_rec_ptr->test_name;
                sqlstm.sqhstl[7] = (unsigned long )11;
                sqlstm.sqhsts[7] = (         int  )0;
                sqlstm.sqindv[7] = (         short *)0;
                sqlstm.sqinds[7] = (         int  )0;
                sqlstm.sqharm[7] = (unsigned long )0;
                sqlstm.sqadto[7] = (unsigned short )0;
                sqlstm.sqtdso[7] = (unsigned short )0;
                sqlstm.sqhstv[8] = (unsigned char  *)&airplane_test_rec_ptr->max_score;
                sqlstm.sqhstl[8] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[8] = (         int  )0;
                sqlstm.sqindv[8] = (         short *)0;
                sqlstm.sqinds[8] = (         int  )0;
                sqlstm.sqharm[8] = (unsigned long )0;
                sqlstm.sqadto[8] = (unsigned short )0;
                sqlstm.sqtdso[8] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode == 1403) break;
                if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


        printf(" %-20ld %-20d %-20ld %-20ld %-20s %-20d %-20d %-20s %-20d\n", airplane_test_rec_ptr->test_id, airplane_test_rec_ptr->faa_no, airplane_test_rec_ptr->airplane_no, airplane_test_rec_ptr->tester_ssn, airplane_test_rec_ptr->test_date, airplane_test_rec_ptr->test_hours, airplane_test_rec_ptr->score, airplane_test_rec_ptr->test_name, airplane_test_rec_ptr->max_score);
        }

        /* Close the cursor. */
        /* EXEC SQL CLOSE airplane_test_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )750;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



        free(airplane_test_rec_ptr);
		
        return 0;
}

int traffic_controller_details() {
        struct emp_traffic_info *emp_traffic_rec_ptr;

        if((emp_traffic_rec_ptr =
                (struct emp_traffic_info *) malloc(sizeof(struct emp_traffic_info)))== 0) {
                fprintf(stderr, "Memory allocation error.\n");
                exit(EXIT_FAILURE);
        }

        /* EXEC SQL DECLARE emp_traffic_cursor2 CURSOR FOR
        SELECT E.ssn, E.unionNo, E.firstName, E.lastName, E.address, E.salary, C.medExamDate
        FROM Employee as E, TrafficController as C
        WHERE E.ssn = C.ssn; */ 


        /* Open the cursor. */
        /* EXEC SQL OPEN emp_traffic_cursor2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = sq0017;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )765;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqcmod = (unsigned int )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



        printf("%-20s %-20s %-20s %-20s %-20s\n", "SSN", "UnionNo", "FirstName", "LastName", "MedicalExamDate");
        printf("%-20s %-20s %-20s %-20s %-20s\n", "----------", "----------", "----------", "----------", "----------\n");

        /* EXEC SQL WHENEVER NOT FOUND DO break; */ 


        for (;;) {
                /* EXEC SQL FETCH emp_traffic_cursor2 INTO :emp_traffic_rec_ptr; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )780;
                sqlstm.selerr = (unsigned short)1;
                sqlstm.sqlpfmem = (unsigned int  )0;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqfoff = (         int )0;
                sqlstm.sqfmod = (unsigned int )2;
                sqlstm.sqhstv[0] = (unsigned char  *)&emp_traffic_rec_ptr->ssn;
                sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         short *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned long )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (unsigned char  *)&emp_traffic_rec_ptr->union_no;
                sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         short *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned long )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[2] = (unsigned char  *)emp_traffic_rec_ptr->first_name;
                sqlstm.sqhstl[2] = (unsigned long )11;
                sqlstm.sqhsts[2] = (         int  )0;
                sqlstm.sqindv[2] = (         short *)0;
                sqlstm.sqinds[2] = (         int  )0;
                sqlstm.sqharm[2] = (unsigned long )0;
                sqlstm.sqadto[2] = (unsigned short )0;
                sqlstm.sqtdso[2] = (unsigned short )0;
                sqlstm.sqhstv[3] = (unsigned char  *)emp_traffic_rec_ptr->last_name;
                sqlstm.sqhstl[3] = (unsigned long )11;
                sqlstm.sqhsts[3] = (         int  )0;
                sqlstm.sqindv[3] = (         short *)0;
                sqlstm.sqinds[3] = (         int  )0;
                sqlstm.sqharm[3] = (unsigned long )0;
                sqlstm.sqadto[3] = (unsigned short )0;
                sqlstm.sqtdso[3] = (unsigned short )0;
                sqlstm.sqhstv[4] = (unsigned char  *)emp_traffic_rec_ptr->address;
                sqlstm.sqhstl[4] = (unsigned long )150;
                sqlstm.sqhsts[4] = (         int  )0;
                sqlstm.sqindv[4] = (         short *)0;
                sqlstm.sqinds[4] = (         int  )0;
                sqlstm.sqharm[4] = (unsigned long )0;
                sqlstm.sqadto[4] = (unsigned short )0;
                sqlstm.sqtdso[4] = (unsigned short )0;
                sqlstm.sqhstv[5] = (unsigned char  *)&emp_traffic_rec_ptr->salary;
                sqlstm.sqhstl[5] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[5] = (         int  )0;
                sqlstm.sqindv[5] = (         short *)0;
                sqlstm.sqinds[5] = (         int  )0;
                sqlstm.sqharm[5] = (unsigned long )0;
                sqlstm.sqadto[5] = (unsigned short )0;
                sqlstm.sqtdso[5] = (unsigned short )0;
                sqlstm.sqhstv[6] = (unsigned char  *)emp_traffic_rec_ptr->med_exam_date;
                sqlstm.sqhstl[6] = (unsigned long )11;
                sqlstm.sqhsts[6] = (         int  )0;
                sqlstm.sqindv[6] = (         short *)0;
                sqlstm.sqinds[6] = (         int  )0;
                sqlstm.sqharm[6] = (unsigned long )0;
                sqlstm.sqadto[6] = (unsigned short )0;
                sqlstm.sqtdso[6] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode == 1403) break;
                if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


                printf("%-20ld %-20d %-20s %-20s %-20s\n\n", emp_traffic_rec_ptr->ssn, emp_traffic_rec_ptr->union_no, emp_traffic_rec_ptr->first_name, emp_traffic_rec_ptr->last_name, emp_traffic_rec_ptr->med_exam_date);
        }

        /* Close the cursor. */
        /* EXEC SQL CLOSE emp_traffic_cursor2; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )823;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



        free(emp_traffic_rec_ptr);
        return 0;
}

int testing_stats() {

        struct test_done_info *test_done_rec_ptr;

        if((test_done_rec_ptr =
                (struct test_done_info *) malloc(sizeof(struct test_done_info)))== 0) {
                fprintf(stderr, "Memory allocation error.\n");
                exit(EXIT_FAILURE);
        }

	/* EXEC SQL DECLARE test_perform_cursor CURSOR FOR
	SELECT E.ssn, E.firstName, E.lastName, T.airplaneNo, COUNT(T.testId)
	FROM Employee as E, TestHistory as T
	WHERE E.ssn = T.testerSsn
	GROUP BY E.ssn, E.firstName, E.lastName, T.airplaneNo; */ 
	


	printf("\n%-20s %-20s %-20s %-20s %-20s\n", "SSN", "FirstName", "LastName", "AirplaneNo", "TotalTests");
	printf("%-20s %-20s %-20s %-20s %-20s\n\n", "----------", "----------", "----------", "----------", "----------");

	/* EXEC SQL OPEN test_perform_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0018;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )838;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 

	
	for(;;) {
		/* EXEC SQL FETCH test_perform_cursor into :test_done_rec_ptr; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 9;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )853;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.sqlpfmem = (unsigned int  )0;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)&test_done_rec_ptr->ssn;
  sqlstm.sqhstl[0] = (unsigned long )sizeof(long);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqhstv[1] = (unsigned char  *)test_done_rec_ptr->first_name;
  sqlstm.sqhstl[1] = (unsigned long )11;
  sqlstm.sqhsts[1] = (         int  )0;
  sqlstm.sqindv[1] = (         short *)0;
  sqlstm.sqinds[1] = (         int  )0;
  sqlstm.sqharm[1] = (unsigned long )0;
  sqlstm.sqadto[1] = (unsigned short )0;
  sqlstm.sqtdso[1] = (unsigned short )0;
  sqlstm.sqhstv[2] = (unsigned char  *)test_done_rec_ptr->last_name;
  sqlstm.sqhstl[2] = (unsigned long )11;
  sqlstm.sqhsts[2] = (         int  )0;
  sqlstm.sqindv[2] = (         short *)0;
  sqlstm.sqinds[2] = (         int  )0;
  sqlstm.sqharm[2] = (unsigned long )0;
  sqlstm.sqadto[2] = (unsigned short )0;
  sqlstm.sqtdso[2] = (unsigned short )0;
  sqlstm.sqhstv[3] = (unsigned char  *)&test_done_rec_ptr->airplane_no;
  sqlstm.sqhstl[3] = (unsigned long )sizeof(long);
  sqlstm.sqhsts[3] = (         int  )0;
  sqlstm.sqindv[3] = (         short *)0;
  sqlstm.sqinds[3] = (         int  )0;
  sqlstm.sqharm[3] = (unsigned long )0;
  sqlstm.sqadto[3] = (unsigned short )0;
  sqlstm.sqtdso[3] = (unsigned short )0;
  sqlstm.sqhstv[4] = (unsigned char  *)&test_done_rec_ptr->total;
  sqlstm.sqhstl[4] = (unsigned long )sizeof(int);
  sqlstm.sqhsts[4] = (         int  )0;
  sqlstm.sqindv[4] = (         short *)0;
  sqlstm.sqinds[4] = (         int  )0;
  sqlstm.sqharm[4] = (unsigned long )0;
  sqlstm.sqadto[4] = (unsigned short )0;
  sqlstm.sqtdso[4] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) break;
  if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


		printf("%-20ld %-20s %-20s %-20ld %-20d\n", test_done_rec_ptr->ssn, test_done_rec_ptr->first_name, test_done_rec_ptr->last_name, test_done_rec_ptr->airplane_no, test_done_rec_ptr->total);
	}

	/* EXEC SQL CLOSE test_perform_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )888;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


	free(test_done_rec_ptr);

        return 0;
}

int test_sept_dec_2015() {
	struct test_sept_dec_2015_info * test_sept_dec_2015_rec_ptr;

	if((test_sept_dec_2015_rec_ptr =
                	(struct test_sept_dec_2015_info *) malloc(sizeof(struct test_sept_dec_2015_info)))== 0) {
                	fprintf(stderr, "Memory allocation error.\n");
                	exit(EXIT_FAILURE);
        }

	/* EXEC SQL DECLARE test_sept_dec_2015_cursor CURSOR FOR
	SELECT Employee.firstName, Employee.lastName, TestHistory.airplaneNo, TestHistory.faaNo, TestHistory.testDate 
	FROM Employee, TestHistory
	WHERE Employee.ssn = TestHistory.testerSsn
		AND TestHistory.testDate BETWEEN TO_DATE('09/01/2015','MM/DD/YYYY') AND TO_DATE('12/31/2015','MM/DD/YYYY')
	ORDER BY faaNo; */ 


	/* Open the cursor. */	
	/* EXEC SQL OPEN test_sept_dec_2015_cursor; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 13;
 sqlstm.arrsiz = 9;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = sq0019;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )903;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.sqlpfmem = (unsigned int  )0;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


 
	printf("\n\nQuery 14: List the name of the technician, the registration of the airplane, and the FAA number of those tests doe between September 2015 and December 2015, sorted by the FAA numbers.--\n\n");
	printf("%-20s %-20s %-20s %-20s %-20s\n", "FirstName", "LastName", "AirplaneRegistrationNo", "FAANo", "TestDat");
	printf("%-20s %-20s %-20s %-20s %-20s\n", "----------", "----------", "----------", "----------", "----------\n");
	
	/* EXEC SQL WHENEVER NOT FOUND DO break; */ 


	for (;;) {
                /* EXEC SQL FETCH test_sept_dec_2015_cursor INTO :test_sept_dec_2015_rec_ptr; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 13;
                sqlstm.arrsiz = 9;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )918;
                sqlstm.selerr = (unsigned short)1;
                sqlstm.sqlpfmem = (unsigned int  )0;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqfoff = (         int )0;
                sqlstm.sqfmod = (unsigned int )2;
                sqlstm.sqhstv[0] = (unsigned char  *)test_sept_dec_2015_rec_ptr->first_name;
                sqlstm.sqhstl[0] = (unsigned long )11;
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         short *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned long )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (unsigned char  *)test_sept_dec_2015_rec_ptr->last_name;
                sqlstm.sqhstl[1] = (unsigned long )11;
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         short *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned long )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[2] = (unsigned char  *)&test_sept_dec_2015_rec_ptr->airplane_no;
                sqlstm.sqhstl[2] = (unsigned long )sizeof(long);
                sqlstm.sqhsts[2] = (         int  )0;
                sqlstm.sqindv[2] = (         short *)0;
                sqlstm.sqinds[2] = (         int  )0;
                sqlstm.sqharm[2] = (unsigned long )0;
                sqlstm.sqadto[2] = (unsigned short )0;
                sqlstm.sqtdso[2] = (unsigned short )0;
                sqlstm.sqhstv[3] = (unsigned char  *)&test_sept_dec_2015_rec_ptr->faa_no;
                sqlstm.sqhstl[3] = (unsigned long )sizeof(int);
                sqlstm.sqhsts[3] = (         int  )0;
                sqlstm.sqindv[3] = (         short *)0;
                sqlstm.sqinds[3] = (         int  )0;
                sqlstm.sqharm[3] = (unsigned long )0;
                sqlstm.sqadto[3] = (unsigned short )0;
                sqlstm.sqtdso[3] = (unsigned short )0;
                sqlstm.sqhstv[4] = (unsigned char  *)test_sept_dec_2015_rec_ptr->test_date;
                sqlstm.sqhstl[4] = (unsigned long )11;
                sqlstm.sqhsts[4] = (         int  )0;
                sqlstm.sqindv[4] = (         short *)0;
                sqlstm.sqinds[4] = (         int  )0;
                sqlstm.sqharm[4] = (unsigned long )0;
                sqlstm.sqadto[4] = (unsigned short )0;
                sqlstm.sqtdso[4] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode == 1403) break;
                if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}


                printf("%-20s %-20s %-20ld %-20d %-20s\n\n", test_sept_dec_2015_rec_ptr->first_name, test_sept_dec_2015_rec_ptr->last_name, test_sept_dec_2015_rec_ptr->airplane_no, test_sept_dec_2015_rec_ptr->faa_no, test_sept_dec_2015_rec_ptr->test_date);
	}

	/* Close the cursor. */
        /* EXEC SQL CLOSE test_sept_dec_2015_cursor; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 9;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )953;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("ORACLE error--");
}



        free(test_sept_dec_2015_rec_ptr);	

	return 0;
}
 
