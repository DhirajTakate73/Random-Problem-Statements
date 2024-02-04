// write a program which returns largest elements from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int Maximum(PNODE Head)
{
    int imax = 0;
    imax = Head -> data;

    while(Head != NULL)
    {
        if(Head -> data > imax)
        {
            imax = Head -> data;
        }
        Head = Head -> next;
    
    }
    return imax;
}

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void display(PNODE Head)
{
    printf("\ncontents of Singly Linear linked list are : \n");

    while(Head !=NULL)
    {
        printf("| %d |->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE first = NULL;
    int iLargest = 0;

    InsertFirst(&first, 240);
    InsertFirst(&first, 320);
    InsertFirst(&first, 230);
    InsertFirst(&first, 110);
    display(first);

    iLargest = Maximum(first);

    printf("Largest Element in the above Linked list is : %d ",iLargest);
    
    return 0;
}

