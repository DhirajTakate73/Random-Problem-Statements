#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

int check(int ino)
{
    if((ino % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
 {
    int ivalue=0;
    bool bret=FALSE;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    bret=check(ivalue);

    if(bret==TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible By 5");
    }


        return 0;
 }
