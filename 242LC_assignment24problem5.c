//  Accept the division of student from user and depends on the division display exam timing. There are 4 divisions in school as A, B, C D. Exam of division A at 7Am, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case sensitive)
#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))    
    {   printf("Exam Of Division A Is At 7 AM");    }

    else if((chDiv == 'B') || (chDiv == 'b'))
    {   printf("Exam Of Division B Is At 8.30 AM"); }

    else if((chDiv == 'C') || (chDiv == 'c'))
    {   printf("Exam Of Division C Is At 9.20 AM"); }

    else if((chDiv == 'D') || (chDiv == 'd'))
    {   printf("Exam Of Division D Is At 10.30 AM");}

    else
    {   printf("Please Enter Valid Division Name\n");}
    
}

int main()
{
    char cvalue = '\0';
     
    printf("Enter Your Division : ");
    scanf("%c",&cvalue);

    DisplaySchedule(cvalue);

    return 0;
}