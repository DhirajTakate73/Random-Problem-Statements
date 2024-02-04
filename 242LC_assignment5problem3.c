//write a program which accepts two numbers and check whether numbers are equal or not



#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int ivalue1 ,int ivalue2)
{
if(ivalue1==ivalue2)
{
    return TRUE;
}
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;

    BOOL bret=FALSE;

    printf("please enter two numbers\n"); 

    scanf("%d %d",&ivalue1,&ivalue2);
    bret=ChkEqual(ivalue1,ivalue2); 
    
    if(bret==TRUE)
    {
        printf("Equal");
    }
    else 
    {
        printf("Not Equal");
    }
    return 0;
}