import java.sql.*;
import oracle.jdbc.*;
import oracle.jdbc.pool.OracleDataSource;

class JDBCDemo
{
    private static final String USERNAME = "scott";
    private static final String PASSWORD = "tiger";
    private static final String HOST = "localhost"; // Host
    private static final String PORT = "1521"; // Default port
    private static final String SID = System.getenv("ORACLE_SID"); // Oracle SID

    public static void main (String args[]) throws SQLException
    {
        OracleDataSource ods = new OracleDataSource();
        ods.setUser(USERNAME);
        ods.setPassword(PASSWORD);
        ods.setURL("jdbc:oracle:thin:" + "@" + HOST
                                       + ":" + PORT
                                       + ":" + SID);

        Connection conn = ods.getConnection();

        // Statement
        CallableStatement cstmt;
        ResultSet cursor;

        cstmt = conn.prepareCall
                     ("begin open ? for select ename, sal, comm, job from emp where job like 'SALES%'; end;");

        // Cursor
        cstmt.registerOutParameter(1, OracleTypes.CURSOR);
        cstmt.execute();
        cursor = ((OracleCallableStatement)cstmt).getCursor(1);

        System.out.println("\n\nThe company's salespeople are--");
        System.out.println("Salesperson   Salary   Commission"); 
        System.out.println("-----------   ------   ----------"); 


        // Use the cursor like a normal ResultSet
        while (cursor.next ())
             {System.out.printf("%-10s %9.2f %12.2f\n",cursor.getString(1), cursor.getFloat(2), cursor.getFloat(3));}

        System.out.println("\nGOOD BYE!"); 
    }
}
