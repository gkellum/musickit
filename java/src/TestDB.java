import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.ResultSetMetaData;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

public class TestDB {
	private static Connection conn;
    private static TestDB db = null;

	public TestDB(String db_file_name_prefix) throws Exception { // note more
		Class.forName("org.hsqldb.jdbcDriver");
		conn = DriverManager.getConnection(
				"jdbc:hsqldb:" + db_file_name_prefix, "sa", "");
	}

    public static void init() {
        try {
            db = new TestDB("db_file");
            db.createDBIfNeeded();
        } catch (Exception ignored) {
        }
    }

	public void createDBIfNeeded() {
        try {
            Statement dummyQuery = conn.createStatement();
            dummyQuery.execute("SELECT COUNT(*) FROM tracks");
        } catch (Exception ignored) {
            // Looks like the db needs some work, try clearing it.
            createDB();
        }
    }

	public void createDB() {
        
        long recordTime = System.currentTimeMillis();
        try {
            db = new TestDB("db_file");
            
            //db.update("drop index filename_index");
            try
            {
                db.update("drop table tracks");
            } 
            catch(Exception exc) {}
            
            db.update("CREATE TABLE tracks ( id INTEGER IDENTITY, name VARCHAR(256))");
            //db.update("CREATE INDEX filename_index ON tracks (name)");
            System.out.println("create time: " + (System.currentTimeMillis() - recordTime));
            recordTime = System.currentTimeMillis();
            insertData(db);
            System.out.println("insert time: " + (System.currentTimeMillis() - recordTime));
            recordTime = System.currentTimeMillis();
        } catch (Exception e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
	}

	public static void main(String[] args) throws Exception {
		TestDB db = null;
		db = new TestDB("db_file");
		long recordTime = System.currentTimeMillis();
		db.update("drop table tracks");
		System.out.println("drop time: " + (System.currentTimeMillis() - recordTime));
		recordTime = System.currentTimeMillis();
		db.update("CREATE TABLE tracks ( id INTEGER IDENTITY, name VARCHAR(256))");
		System.out.println("create time: " + (System.currentTimeMillis() - recordTime));
		recordTime = System.currentTimeMillis();
		insertData(db);
		System.out.println("insert time: " + (System.currentTimeMillis() - recordTime));
		recordTime = System.currentTimeMillis();
		db.query("SELECT * FROM tracks order by name");
		System.out.println("query time: " + (System.currentTimeMillis() - recordTime));
		recordTime = System.currentTimeMillis();
		db.shutdown();
		System.out.println("shutdown time: " + (System.currentTimeMillis() - recordTime));
	}

	private static void insertData(TestDB db) throws SQLException {
		int index = 0;
		while (index < 100000) {
			String name = "file" + index++;
			db.update("INSERT INTO tracks(name) VALUES('" + name + "')");
		}
	}

	public void shutdown() throws SQLException {
		Statement st = conn.createStatement();
		st.execute("SHUTDOWN");
		conn.close();
	}

	public synchronized static String[] query(String expression) throws SQLException {
		Statement st = conn.createStatement();
		ResultSet rs = st.executeQuery(expression);
		List<String> resultList = new ArrayList<String>();
		//dump(rs);
		while (rs.next()) {
		    long id = rs.getLong(1);
		    String name = rs.getString(2);
		    resultList.add(name);
		}
		st.close();
		
		return resultList.toArray(new String[resultList.size()]);
	}

	public synchronized void update(String expression) throws SQLException {
		Statement st = conn.createStatement();
		int i = st.executeUpdate(expression);

		if (i == -1) {
			System.out.println("db error : " + expression);
		}
		st.close();
	}

	public static void dump(ResultSet rs) throws SQLException {
		ResultSetMetaData meta = rs.getMetaData();
		int colmax = meta.getColumnCount();
		int i;
		Object o = null;
		for (; rs.next();) {
			for (i = 0; i < colmax; ++i) {
				o = rs.getObject(i + 1);
				System.out.print(o.toString() + " ");
			}
			System.out.println(" ");
		}
	}

}
