//write a program to find factorial of given number.

#include<stdio.h>
int Factorial(int ino)
{
    int icnt=0;
    int iFactorial=1;
    if(ino<0)
    {
        printf("Factorial Is Not Defined For Negative Integers\n");
    }
    for(icnt=1; icnt<=ino; icnt++)
    {
        if(ino>0)
        {
            iFactorial*=icnt;   
        }

    }return iFactorial;
    
}


int main()
{
    int ivalue=0;
    int iret=0;

    printf("Please Enter Number :\n");
    scanf("%d",&ivalue);

    iret=Factorial(ivalue);

    if(iret==1)
    {
        printf("Factorial of Entered number is 0");
    }
    else
    {printf("Factorial of Entered number is %d",iret);}

    return 0;
}

//time complexity of this program is : O(N)