import java.util.*;
import java.util.Stack;

class stacker
{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number of elements you want to see in your stack: ");
        Stack<Integer>st1=new Stack<Integer>();
        int n=sc.nextInt();
        Stack<Integer>st=new Stack<Integer>();
        System.out.println("Enter the elements in the stack: ");
        for(int i=0;i<n;i++)
        {
            int el=sc.nextInt();
            st.push(el);
        }
        
        while(!st.empty()){
            st1.push(st.pop());
        }
        System.out.println("The elements after popping are: ");
        while(!st1.empty()){
            System.out.println(st1.pop());
        }
    }
}