import java.io.StringReader;
import java.sql.SQLException;

import antlr.RecognitionException;
import antlr.TokenStreamException;

import com.sdicons.json.model.JSONArray;
import com.sdicons.json.model.JSONDecimal;
import com.sdicons.json.model.JSONInteger;
import com.sdicons.json.model.JSONObject;
import com.sdicons.json.model.JSONString;
import com.sdicons.json.model.JSONValue;
import com.sdicons.json.parser.JSONParser;

public class Main {

    
    public static void init() {
        TestDB.init();
    }
    
    // , String jsonEncodedArguments, String callbackName, String errorCallbackName
    static public String post(String actionName, String jsonEncodedArguments, String callbackName, String errorCallbackName) {
        System.out.println("called post with action name <" + actionName + "> and arguments <" + jsonEncodedArguments + ">");
        if (actionName.equals("queryDB")) {
            try {
                JSONParser p = new JSONParser(new StringReader(jsonEncodedArguments));
                JSONValue all = p.nextValue();
                JSONObject outerBrackets = (JSONObject) all;
                int startInt = 0;
                JSONInteger startIntJSON = (JSONInteger) outerBrackets.getValue().get("startRow");
                if (startIntJSON != null) {
                    startInt = startIntJSON.getValue().intValue();
                }

                int endInt = 100;
                JSONInteger endIntJSON = (JSONInteger) outerBrackets.getValue().get("endRow");
                if (endIntJSON != null) {
                    endInt = endIntJSON.getValue().intValue();
                }

                long recordedTime = System.currentTimeMillis();

                int numberOfResults = endInt - startInt;
                String[] results = TestDB.query("SELECT * FROM tracks OFFSET " + startInt + " LIMIT " + numberOfResults);

                System.out.println("query speed <" + (System.currentTimeMillis() - recordedTime) + ">" );     

                final JSONArray jsonArray = new JSONArray();
                for (String result : results) {
                    jsonArray.getValue().add(new JSONString(result));
                }
                //System.out.println("time creating json array: " + (System.currentTimeMillis() - recordedTime));
                recordedTime = System.currentTimeMillis();
                String renderedJSONString = jsonArray.render(true);
                //System.out.println("time rendering json array: " + (System.currentTimeMillis() - recordedTime));
                //System.out.println(renderedJSONString);     

                return renderedJSONString;
            } catch (TokenStreamException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            } catch (RecognitionException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            } catch (SQLException e) {
                e.printStackTrace();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        return "";
    }

    static public void test(int arg) {
        System.out.println("called test with arg " + arg);
    }
    
}
