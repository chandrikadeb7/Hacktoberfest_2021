//Program for loop finding in a Singly LinkedList
 
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct node{
      int val; 
      int flag;
      struct node *next;
};

struct node *head = NULL;

//Insertion of elements
void insert(int v){
     struct node *newNode = (struct node*) malloc(sizeof(struct node));
     newNode->val = v;
     newNode->flag=0;
     newNode->next = NULL;
     if(head == NULL) 
           head = newNode;
     else{
          struct node* temp = head;
          while(temp->next){
                   temp=temp->next;
           }
           temp->next = newNode;
     }
}

//Actual code of loop finding
bool isLoopFound(struct node *head){ 
       struct node *temp=head;
       while(temp){  
            if(temp->flag==1)
                     return true;
            temp->flag=1;
            temp=temp->next;
       }
       return false;
}

int main(){ 
    int n;
    while(scanf("%d",&n)>0)
            insert(n);
    struct node *temp = head;
    //Printing linked list elements
    while (temp->next){
          printf("%d->",temp->val); 
          temp=temp->next;
    }
    printf("%d\n", temp->val);
    //Used for testing purpose - connecting end of linked list to the head.
    temp->next = head;
    printf("%s",(isLoopFound(head)?"YES":"NO"));
    return 0;
}
