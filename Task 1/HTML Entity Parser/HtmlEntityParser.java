import java.io.*;
import  java.util.*;
class HtmlEntityParser {
    public static String entityParser(String text) {
        StringBuilder str=new StringBuilder();
        Stack<Integer>st=new Stack<>();
        HashMap<String,String>map=new HashMap<>();
        map.put("&quot","\"");
        map.put("&apos","'");
        map.put("&amp","&");
        map.put("&gt",">");
        map.put("&gt",">");
        map.put("&lt","<");
        map.put("&frasl","/");
        int len=text.length();
        int st_size=st.size();//stack size
        for(int i=0;i<len;i++)
        {
            st_size=st.size();
            char ch=text.charAt(i);
            if(ch=='&')
            {
                if(st_size==0)
                    st.push(i);//store the index 
                else
                {
                    String substr=text.substring(st.pop(),i);
                    str.append(substr);
                    st.push(i);
                }
            }
            else if(ch==';' && st_size==1)
            {
                String substr=text.substring(st.pop(),i);
                if(map.containsKey(substr))
                  str.append(map.get(substr));
                else
                    str.append(substr+";");
            }
            else if(st_size==0)
            {
                str.append(ch);
            }
        }
        if(st.size()==1)//if
        {
            String substr=text.substring(st.pop());
            str.append(substr);   
        }
        return str.toString();
    }

    public static void main(String args[]) {

      Scanner in=new Scanner(System.in);
      String text=in.nextLine();
      System.out.println(entityParser(text));

    }
}