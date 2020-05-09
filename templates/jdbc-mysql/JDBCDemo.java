import java.sql.*;
import oracle.jdbc.*;
import oracle.jdbc.pool.OracleDataSource;

class JDBCDemo
{

    // JDBC driver name and database URL
    private static final String JDBC_DRIVER = "com.mysql.jdbc.Driver"; 


    //  Database credentials
    private static final String USERNAME = "myuser"; // username 
    private static final String PASSWORD = "mypassword"; // password
    private static final String HOST = "localhost"; // Host
    private static final String DATABASE_NAME = "BTE423"; // Database name
    private static final String PORT = "3306"; // Default port

    public static void main (String args[]) throws SQLException
    {
        Connection conn = null;
        try{
            //STEP 2: Register JDBC driver
            Class.forName(JDBC_DRIVER);

            //STEP 3: Open a connection
            System.out.println("Connecting to a selected database...");
            //conn = DriverManager.getConnection(DB_URL, USERNAME, PASSWORD);
            conn = DriverManager.getConnection("jdbc:mysql://" + HOST + ":" + PORT + "/" + DATABASE_NAME, USERNAME, PASSWORD);
            System.out.println("Connected database successfully...");
        }   catch(SQLException se){
            //Handle errors for JDBC
            se.printStackTrace();
        }catch(Exception e){
            //Handle errors for Class.forName
            e.printStackTrace();
        }finally{
            //finally block used to close resources
            try{
                if(conn!=null)
                    conn.close();
            }catch(SQLException se){
                se.printStackTrace();
            }//end finally try
        }//end try
        System.out.println("Goodbye!");
    }
}
