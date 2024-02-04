// write a program which accepts number from user and print that number of even numbers on screen 

#include<stdio.h>
void printeven(int ino)
{
    int icnt=0;
    int i=0;

    if(ino<0)           //updator
    {
        ino=-ino;
    }
    while(icnt < ino)
    {
        if(i % 2 ==0)
        {
            printf("%d\n",i);
            icnt++;
        }
        i++;
    }
    printf("/n");
}

int main()
{
    int ivalue=0;
    printf("Enter Number");
    scanf("%d",&ivalue);

    printeven(ivalue);

    return 0;
}