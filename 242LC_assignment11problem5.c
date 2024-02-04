//write a program which accept number from user and count frequency of such a digits which are less than 6

#include<stdio.h>
int CountLessThan6(int ino)
{
    int count=0;
    while(ino!=0)       // OR while(ino>0)
    {
        if(ino % 10 < 6)
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

    iret=CountLessThan6(ivalue);
    printf("frequency of digits which are less than 6 in the entered number is : %d\t",iret);

    return 0;
}