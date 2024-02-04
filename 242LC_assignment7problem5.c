//write a program which accept number from user and display its table in reverse order.

#include<stdio.h>

int Table(int ino)
{
    int icnt=0;

    if(ino<0)                   //filter 
    {ino=-ino;}

    for(icnt=10; icnt>=1; icnt--)
    {
        printf("%d ",ino*icnt);
    }
    
}


int main()
{
    int ivalue=0;
    int iret=0;

    printf("Please Enter Number :\n");
    scanf("%d",&ivalue);

    Table(ivalue);

    return 0;
}

//time complexity of this program is : O(1)