//write a program which accept number from user and return multiplication of all digits.


#include<stdio.h>
int Multidigits(int ino)
{
    int imultiplication=1;
    int idigit=0;
    while(ino!=0)       // OR while(ino>0)
    {
        idigit=ino%10;
        ino=ino/10;
        if(idigit!=0)
        {
            imultiplication *=idigit;
        }
        
    }
    
    return imultiplication;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number :");
    scanf("%d",&ivalue);

    iret=Multidigits(ivalue);
    printf("multiplication of all digits in the entered number is :%d",iret);

    return 0;
}