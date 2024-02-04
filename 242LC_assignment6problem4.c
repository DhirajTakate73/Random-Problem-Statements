//write a program which accepts N from user and print all odd numbers upto N.

#include<stdio.h>
void OddDisplay(int ino)
{
   if(ino<=0)
   {
    ino=-ino;
   }
   int icnt=0;
   for(icnt=1; icnt<=ino; icnt++)
   {
    if((icnt % 2) !=0)
    {
        printf("%d\t",icnt);
    }
   }
}

int main()
{
    int ivalue=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    OddDisplay(ivalue);

    return 0;
}

//time complexity of this program is : O(N)