#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;


bool chkeven(int ino)
{
    if(ino<0)               //updator
    {
        ino=-ino;
    }

    if((ino % 2)==0)
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
   bool bret= FALSE;

    printf("Enter Number");
    scanf("%d",&ivalue);

    bret=chkeven(ivalue);
    if(bret==TRUE)
    {
       printf("Entered number is even");
 
    }
    else
    {
         printf("Entered number is not a even number");
    }

    return 0;
}