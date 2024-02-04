//write a program which accept N and print first 5 multiples of N

#include<stdio.h>
void MultipleDisplay(int ino)
{
   if(ino<=0)
   {
    ino=-ino;
   }

   int icnt=0;

   printf("first 5 multiples of %d are: ",ino);

   for(icnt=1; icnt<=5; icnt++)
   {
    printf("%d  ",ino*icnt);
   }
   
}

int main()
{
    int ivalue=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

     MultipleDisplay(ivalue);

    return 0;
}

//time complexity of this program is : O(1)