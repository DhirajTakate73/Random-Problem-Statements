//write a program which accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>
int factdiff(int ino)
{
    int icnt=0;
    int factsum=0;
    int nonfactsum=0;
    int factnonfactdiff=0;

    if(ino<=0)
    {
        ino=-ino;
    }
    
    for(icnt=1; icnt<=ino; icnt++)
    {
        if((ino % icnt)==0) 
        {
           factsum=factsum + icnt;
        }
       
        if((ino % icnt)!=0) 
        {
            nonfactsum=nonfactsum + icnt;
            factnonfactdiff = factsum - nonfactsum;
        }
       
    }
    return factnonfactdiff;
}

int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

   iret=factdiff(ivalue);
   printf("difference between summation of factors and non factors is :%d",iret);
    

    return 0;
} 