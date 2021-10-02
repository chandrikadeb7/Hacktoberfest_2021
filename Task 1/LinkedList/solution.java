import java.util.*;
class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ch="";
        LinkedList list = new LinkedList();
        do{
        System.out.println("Enter  the value");
        int n = sc.nextInt();
        sc.nextLine();
        list.addNode(n);
        System.out.println("Do you want to add another  node?  Type Yes/No");
        ch = sc.nextLine();
        }while(ch.equals("Yes"));
        System.out.print("The elements in the linked list are  ");
        list.display();
	}


    static class Node{
        int data;
        Node next;
        public Node(int data){
            this.data=data;
            this.next=null;
        }
    }


    static class LinkedList{
        
        static Node head;
        Node next,temp;
        
        public LinkedList(){
            head=null;
        }
        
        public void addNode(int data){
            Node newnode=new Node(data);
            if(head==null){
                head=newnode;
            }
            else{
                temp=head;
                while(temp.next!=null){
                    temp=temp.next;
                }
                temp.next=newnode;
            }
        }

        public void display(){
            temp=head;
            while(temp!=null){
                System.out.print(temp.data+" ");
                temp=temp.next;
            }
        }
    }
}