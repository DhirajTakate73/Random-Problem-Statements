//write a program to find odd fatorial of given number.

#include<stdio.h>
int OddFactorial(int ino)
{
    int icnt=0;
    int iFactorial=1;

    if(ino<0)
    {
        printf("Factorial Is Not Defined For Negative Integers\n");
    }
    else
    {
        for(icnt=1; icnt<=ino; icnt+=2)
        {
            if(ino>0)
        {
            iFactorial*=icnt;   
        }

        }
    
    }
    return iFactorial;

}


int main()
{
    int ivalue=0;
    int iret=0;

    printf("Please Enter Number :\n");
    scanf("%d",&ivalue);

    iret=OddFactorial(ivalue);

    if(iret==1)
    {
        printf("Invalid Input");
    }
    else
    {printf("Multiplication Of Odd factorials of Entered number is %d",iret);}

    return 0;
}

//time complexity of this code is O(N)