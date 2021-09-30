/*
OUTPUT OF THE PROGRAM:

ENTER THE NUMBER OF ELEMENTS YOU WANT TO SEE IN YOUR STACK: 10
ENTER THE ELEMENTS IN YOUR STACK: 1,2,3,4,5,6,7,8,9,99
THE ELEMENTS AFTER POPPING ARE: 1,2,3,4,5,6,7,8,9,99

EXPLANATION:
HERE I HAVE TAKEN TWO STACKS, ONE IS A TEMPORARY STACK TO STORE THE WHILE WHILE I POP THEM OUT OF THE MAIN STACK
AFTER PUSHING THE ELEMENTS INTO THE TEMPORARY STACK I WILL POP THEM OUT TO MAKE IT SEEM LIKE ELEMENTS ARE POPPING OUT IN FIFO MANNER FROM THE MAIN STACK.

TEMPORARY STACK=st1
MAIN STACK= st

*/

import java.util.*;
import java.util.Stack;

class Reverse_stack
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