import java.util.*;

public class BalancedParenthesis {
    
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        String q=null;
        String str1="[(abc)]";
        String str2="(ac}[{]";

        if(n==0){
            q=str1;
        }
        else if(n==1){
            q=str2;
        }
        
    
        Stack<Character> s = new Stack<Character>();

        for(int i=0;i<q.length();i++){
            if(q.charAt(i)=='(' || q.charAt(i)=='{' || q.charAt(i)=='[' ){
                s.push(q.charAt(i));
            }
            else{
            //  if((q.charAt(i)==')' || q.charAt(i)=='}' || q.charAt(i)==']') && (!s.isEmpty())){
                
                if(q.charAt(i)==')' && s.peek()=='('){
                    s.pop();
                }
                if(q.charAt(i)=='}' && s.peek()=='{'){
                    s.pop();
                }
                if(q.charAt(i)==']' && s.peek()=='['){
                    s.pop();
                }
            }
        }

        if(s.isEmpty()){
            System.out.println("Balanced");
        }
        else{
            System.out.println("Not balanced");
        }

        sc.close();
    }
}
