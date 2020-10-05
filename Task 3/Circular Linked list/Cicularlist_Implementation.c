// Circular linked list is a linked list(either single or double) in which the last node contains the address of the first node.
// In this program, we have shown how to add a node, delete a node and print a circular linked list.
// Its main applications include process scheduling, device scheduling algorithms in CPU, etc.

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}nodetype;
void insertNode(nodetype**);
void deleteNode(nodetype**,int);
void displayList(nodetype*);
int main()
{
    nodetype *last=NULL;
    int opt,key;
    char choice;
    do
    {
        printf("MENU\n");
        printf("1. To insert a node in the circular linked list\n");
        printf("2. To delete a node from the circular linked list\n");
        printf("3. To print the circular linked list\n");
        printf("Enter any option from the above menu\n");
        scanf("%d",&opt);
        getchar();
        switch (opt)
        {
            case 1:
                insertNode(&last);
                break;
            case 2:
                if(last==NULL)
                    printf("Linked list is empty\n");
                else
                {
                    printf("Enter the key\n");
                    scanf("%d",&key);
                    getchar();
                    deleteNode(&last,key);
                }
                break;
            case 3:
                if(last==NULL)
                printf("Linked list is empty\n");
                else
                {
                    printf("Contents of circular linked list are:\n");
                    displayList(last);
                }
                break;
            default:
                printf("Invalid option,choose from the options given\n");
        }
            printf("Do you want to continue,press 'Y' or 'N' \n");
            scanf("%c",&choice);
    }while(toupper(choice)=='Y');
}
void insertNode(nodetype** last)
{
    nodetype* p=malloc(sizeof(nodetype));
    if(p==NULL)
        printf("not enogh memory\n");
    else
    {
        int num;
        printf("Enter the element you want to insert\n");
        scanf("%d",&num);
        getchar();
        p->data=num;
        if(*last==NULL)
        {
            *last=p;
            (*last)->next=p;
        }
        else
        {
            p->next=(*last)->next;
            (*last)->next=p;
            *last=p;
        }
    }
}
void deleteNode(nodetype **last,int key)
{
    nodetype* temp=(*last)->next;
    nodetype *prev;
    int loc=1;
    do
    {
        if(temp->data==key)
            break;
        prev=temp;
        temp=temp->next;
        loc++;
    }while(temp!=((*last)->next));
    if(temp==(*last)->next && loc>1)
        printf("Key not found in the linked list\n");
    else
    {
        printf("key %d found in node %d\n",key,loc);
        if(temp==(*last)->next)
        {
            (*last)->next=((*last)->next)->next;
            if(*last==temp)
                *last=NULL;
        }
        else if(temp==*last)
        {
            prev->next=(*last)->next;
            *last=prev;
        }
        else
            prev->next=temp->next;
            free(temp);
    }
}
void displayList(nodetype* last)
{
    nodetype* temp=last->next;
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=last->next);
    printf("\n");
}
