//write a program to find even fatorial of given number.

#include<stdio.h>
int EvenFactorial(int ino)
{
    int icnt=0;
    int iFactorial=1;

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

    iret=EvenFactorial(ivalue);

    if(iret==1)
    {
        printf("Invalid Input");
    }
    else
    {printf("Multiplication Of Even factorials of Entered number is %d",iret);}

    return 0;
}

//time complexity of this code is O(N)