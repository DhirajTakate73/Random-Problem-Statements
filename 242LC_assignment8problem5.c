//write a program which returns difference between even and odd factorial of entered number.

#include<stdio.h>
int FactorialDiff(int ino)
{
    int icnt=0;
    int eFactorial=1;
    int oFactorial=1;

    if(ino<0)
    {
        printf("Factorial Is Not Defined For Negative Integers\n");
    }
    else
    {
        for(icnt=2; icnt<=ino; icnt+=2)
        {
            if(ino>0)
        {
           
            eFactorial*=icnt;   
        }
           
        }
        for(icnt=1; icnt<=ino; icnt+=2)
        {
            if(ino>0)
        {
            oFactorial*=icnt;   
        }

        }
    
    }
    printf("(%d-%d)\t",eFactorial,oFactorial);
    return eFactorial - oFactorial;

}


int main()
{
    int ivalue=0;
    int iret=0;

    printf("Please Enter Number :");
    scanf("%d",&ivalue);

    iret=FactorialDiff(ivalue);

    if(iret==1)
    {
        printf("Invalid Input");
    }
    else
    {printf("DIfference Between Multiplication Of Even And Odd factorials of Entered number is %d",iret);}

    return 0;
}

//time complexity of this code is O(N)