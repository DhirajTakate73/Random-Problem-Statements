//write a program which accept number from user and check whether it vontains 0 in it or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0 
typedef int bool;

bool checkzero(int ino)
{
    int idigit=0;
    
    while(ino!=0)
    {
        idigit=ino%10;
        
        ino=ino/10;
    
    if(idigit==0 || ino==0)
        {return TRUE;}
    else
        {return FALSE;}
    }
}

int main()
{
    int ivalue=0;
    bool bret=FALSE;

    printf("enter number");
    scanf("%d",&ivalue);

    bret=checkzero(ivalue);
    if(bret==TRUE)
    {
        printf("it contains zero");
    }
    else
    {
        printf("there is no zero");
    }

    return 0;
}