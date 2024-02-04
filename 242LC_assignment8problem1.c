//write a program which accepts number from user and display the given pattern.

#include<stdio.h>
void displayPattern(int ino)
{
    if(ino<0)
    {ino=-ino;}             //filter
    
    int icnt=0;
    for(icnt=1; icnt<=ino ;icnt++)
    {
        printf("* ");
    }
    for(icnt=1; icnt<=ino ;icnt++)
    {
        printf("# ");
    }
}
int main()
{
    int ivalue=0;

    printf("please enter number\n");
    scanf("%d",&ivalue);

    displayPattern(ivalue);

    return 0;
}
//The time complexity of the provided code is O(N)