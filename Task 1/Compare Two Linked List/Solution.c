#include<stdio.h>
#include<stdlib.h>
struct Linkedlist
{
    int data;
    struct Linkedlist *next;
};
struct Linkedlist*head1=NULL;
struct Linkedlist*head2=NULL;

void createlist1()
{
    printf("\nCreate List 1");
    int choice=1;
    while(choice)
    {
        struct Linkedlist *newnode= (struct Linkedlist*)malloc(sizeof(struct Linkedlist));
        printf("\n Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head1==NULL)
        {
            head1=newnode;
        }
        else
        {
            struct Linkedlist *ptr=head1;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=newnode;
        }

        printf("\nEnter another node in Linked List 1 (Yes=1; No=0)?:");
        scanf("%d",&choice);
    }

}

void createlist2()
{
    printf("\n Create List 2");
    int choice=1;
    while(choice)
    {
        struct Linkedlist *newnode= (struct Linkedlist*)malloc(sizeof(struct Linkedlist));
        printf("\n Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head2==NULL)
        {
            head2=newnode;
        }
        else
        {
            struct Linkedlist *ptr=head2;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=newnode;
        }

        printf("\nEnter another node in Linked List 2 (Yes=1; No=0)?:");
        scanf("%d",&choice);
    }

}

void compare()
{
    struct Linkedlist *ptr1=head1;
    struct Linkedlist *ptr2=head2;

    int flag=1;

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data!=ptr2->data)
        {
            flag=0;
            break;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    if(flag==0)
    {
        printf("\nList are not Equal.");
    }
    else
    {
        printf("\n List are equal.");
    }
}

void main()
{
    createlist1();
    createlist2();
    compare();
}
