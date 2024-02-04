// write a program which search first occurrence of particular element from singly linear linked list function should return position at which element is found

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

int SearchFirstOcc(PNODE Head, int target)
{
    int icnt = 1;
    while(Head != NULL)
    {
        if(Head -> data == target)
        {
            return icnt;
        }
        Head = Head -> next;
        icnt++;
    }
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
    int InputElement = 0;
    int position = 0;

    InsertFirst(&first, 70);
    InsertFirst(&first, 60);
    InsertFirst(&first, 50);
    InsertFirst(&first, 40);
    InsertFirst(&first, 30);
    InsertFirst(&first, 20);
    InsertFirst(&first, 10);
    display(first);

    InputElement = 30;
    printf("Element to find it's first occurrence is : %d ",InputElement);

    position = SearchFirstOcc(first, InputElement);

    printf("\nposition : %d ",position);
    
    return 0;
}

