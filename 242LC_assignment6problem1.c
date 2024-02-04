//write a program which accept number from user and print that number of $ & * on screen.

#include<stdio.h>
void pattern(int ino)
{
    int icnt=0;

    if(ino<=0)                   //filter 
    {
        ino=-ino;
    }
    for(icnt=1 ; icnt<=ino; icnt++)
    {
        printf(" $  * ",icnt);
    }
}
int main()
{
    int ivalue=0;
    printf("enter number");
    scanf("%d",&ivalue);

    pattern(ivalue);

    return 0;
}

//time complexity of this program is : O(N)