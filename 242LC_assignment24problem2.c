// Accept character from user and check whether it is capital or not (A-Z)
// Input : F
//Output : TRUE
//Input : d
//Output : FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkCapital(char cvalue)
{
    if( (cvalue >='A')  &&  (cvalue <= 'Z') )    
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
    char cvalue = '\0';
    bool bret = FALSE;
     
    printf("Enter the character : ");
    scanf("%c",&cvalue);

    bret = ChkCapital(cvalue);

    if(bret == TRUE)
    {
        printf("It is a Capital character");
    }
    else
    {
        printf("It is not a Capital character");
    }

    return 0;
}