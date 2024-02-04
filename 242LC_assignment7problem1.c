//write a program which accept number from user and if number is less than 50 then print small,
// if it is greater than 50 and less than 100 then print medium if it is greater than 100 then print large.

#include<stdio.h>
void chksmallmedlar(int ino)
{
    if (ino<0)
    {printf("Invalid Entry");}

    else if(ino<50)
    {printf("Entered Number Is Smaller");}

    else if(ino==50)
    {printf("Entered Number Is Is Equal To 50");}

    else if(ino>50 && ino<=99)
    {printf("Entered Number Is Medium");}

    else if(ino==100)
    {printf("Entered Number Is Is Equal To 100");}

    else
    {printf("Entered Number Is larger");}
}
int main()
{
    int ivalue=0;
    printf("Please Enter Number :\n");
    scanf("%d",&ivalue);
    chksmallmedlar(ivalue);

    return 0;
}

//time complexity of this program is : O(1)
