//write a program which accept number from user and return the count of odd digits

#include<stdio.h>
int CountOdd(int ino)
{
    int count=0;
    while(ino!=0)       // OR while(ino>0)
    {
        if((ino % 10) % 2 !=0)
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

    iret=CountOdd(ivalue);
    printf("count of even digits in the entered number is:%d",iret);

    return 0;
}