//write a program which accepts number from user and display its table.

#include<stdio.h>

int Table(int ino)
{
    int icnt=0;

    if(ino<0)                   //filter 
    {ino=-ino;}

    for(icnt=1; icnt<=10; icnt++)
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