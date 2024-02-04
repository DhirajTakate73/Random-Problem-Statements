//write a program which accept number from user and count frequency of 2 in it.

#include<stdio.h>
int CountTwo(int ino)
{
    int count=0;
    while(ino!=0)       // OR while(ino>0)
    {
        if(ino % 10 == 2)
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

    iret=CountTwo(ivalue);
    printf("frequency of 2 in entered number is:%d",iret);

    return 0;
}