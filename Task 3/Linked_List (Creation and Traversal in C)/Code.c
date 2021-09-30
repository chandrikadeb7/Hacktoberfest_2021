// This is a simple Program of Creation and traversal of linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data; // data to store data
    struct node *next; // pointer to point to the next node
};
void LinkedList(struct node *ptr)// Printing the data of the linked list with the help of a pointer
    while (ptr != NULL) // Inshort Traversing the linked List
    {
        printf("Element =  %d\n", ptr->data);
        ptr = ptr->next; // we cannot directly point the next node otherwise it will create infinite loop
    }                                           
}
int main()
{
    struct node *head; // creating the first node
    struct node *second; // then second 
    struct node *third;// then third
    struct node *fourth;// and last fourth 
// but in linked list we can create as many nodes as we want
    head = (struct node *)malloc(sizeof(struct node)); // allocating the memory on heap by using pointer and size of funtion
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    // Linking The First Node , Giving Data to it And then pointing it to the second node
    head->data = 7;
    head->next = second;
// Linking The Second Node , Giving Data to it And then pointing it to the Third node
    second->data = 12;
    second->next = third;
// Linking The Third Node , Giving Data to it And then pointing it to the Fourth node
    third->data = 15;
    third->next = fourth;
// Linking The Fourth Node , Giving Data to it And then pointing it to NUll
    fourth->data=55;
    fourth->next=NUll;

    LinkedList(head); // starting the node from the first node and then traversing
}