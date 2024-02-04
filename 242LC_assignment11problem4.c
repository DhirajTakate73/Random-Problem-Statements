//write a program which accept number from user and count frequency of 4 in it.

#include<stdio.h>
int Countfour(int ino)
{
    int count=0;
    while(ino!=0)       // OR while(ino>0)
    {
        if(ino % 10 == 4)
        {
            count++;
        }
        ino/=10;
    }
    return count;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number :");
    scanf("%d",&ivalue);

    iret=Countfour(ivalue);
    printf("frequency of 4 in entered number is:%dtimes...",iret);

    return 0;
}