// write a program which accept number from user and return the count of digits in between 3 and 7


#include<stdio.h>
int CountRange(int ino)
{
    int count=0;
    while(ino!=0)       // OR while(ino>0)
    {
        if((ino % 10)>3 && (ino % 10)<7 )
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

    iret=CountRange(ivalue);
    printf("count of  digits in between 3 and 7 of the entered number is:%d",iret);

    return 0;
}