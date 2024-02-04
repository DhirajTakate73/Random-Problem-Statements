//accept single digit number from user and print it into word.

#include<stdio.h>
void DigitToWord(int ino)
{
    if (ino>=10)
    {printf("Invalid Entry");}

    else if(ino==0)
    {printf("Zero");}

    else if(ino==1  ||  ino==-1)
    {printf("One");}

    else if(ino==2  ||  ino==-2)
    {printf("Two");}

    else if(ino==3  ||  ino==-3)
    {printf("Three");}

    else if(ino==4  ||  ino==-4)
    {printf("Four");}

    else if(ino==5  ||  ino==-5)
    {printf("Five");}

    else if(ino==6  ||  ino==-6)
    {printf("Six");}

    else if(ino==7  ||  ino==-7)
    {printf("Sevwn");}

    else if(ino==8  ||  ino==-8)
    {printf("Eight");}

    else if(ino==9  ||  ino==-9)
    {printf("Nine");}

    else
    {printf("invalid entry");}
}
int main()
{
    int ivalue=0;
    printf("Please Enter Number :\n");
    scanf("%d",&ivalue);
    DigitToWord(ivalue);

    return 0;
}

//time complexity of this program is : O(1)