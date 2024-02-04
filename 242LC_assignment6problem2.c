//write a program which accept number from user and print numbers till that number

#include<stdio.h>
void Display(int ino)
{
    int icnt=0;

    if(ino<=0)                   //filter 
    {
        ino=-ino;
    }
    for(icnt=1 ; icnt<=ino; icnt++)
    {
        printf("%d\t",icnt);            //  "\t"for spaces between numbers
    }
}
int main()
{
    int ivalue=0;
    printf("enter number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}

//time complexity of this program is : O(N)