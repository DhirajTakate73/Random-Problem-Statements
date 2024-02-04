// Accept character from user and check whether it is digit or not (0-9)
// Input : 7
//Output : TRUE
//Input : d
//Output : FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkDigit(char cvalue)
{
    if( (cvalue >= '0')  &&  (cvalue <= '9') )    
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}



int main()
{
    char cvalue = 0;
    bool bret = FALSE;
     
    printf("Enter the Number : ");
    scanf("%c",&cvalue);

    bret = ChkDigit(cvalue);

    if(bret == TRUE)
    {
        printf("It is a Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}