//write a program which accepts one number from user and check that number is greater than 100 or not.

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int ivalue)
{
if(ivalue>100)
{
    return TRUE;
}
}
int main()
{
    int ivalue=0;
    BOOL bret=FALSE;
    printf("please enter number\n");
    scanf("%d",&ivalue);
    bret=ChkGreater(ivalue);
    if(bret==TRUE)
    {
        printf("Greater");
    }
    else 
    {
        printf("Smaller");
    }
    return 0;
}