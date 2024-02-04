//write a program which accepts total marks & obtained marks from user and calculate percentage.

#include<stdio.h>
float percentage(int ino1, int ino2)
{
    float fans=0.0;
    
    if((ino1<0) || (ino2<0))        //filter
    {
        printf("invalid number\n");
        
    }
    if(ino2>ino1)               
    {
        printf("invalid input\n"); 
        return fans;
    }

    fans=((float)ino2/ino1)*100;   //we cast obtained marks to float to ensure that the division is a float so we can calculate percentage correctly.
    
    return fans;
}
int main()
{
    int ivalue1=0,  ivalue2=0;
    float fret=0.0;

    printf("please enter total marks");
    scanf("%d",&ivalue1);

    printf("please enter obtained marks");
    scanf("%d",&ivalue2);

    fret=percentage(ivalue1,ivalue2);

    printf("You've got :%.2f%%\n ",fret);

    return 0;
}
//In this corrected program, we cast obtainedMarks to a float, and we perform the division as a floating-point operation. 
//This ensures that the division result is a float, allowing you to calculate the percentage correctly.
