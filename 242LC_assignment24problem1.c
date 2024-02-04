// Accept character from user and check whether it is alphabet or not (A-Z  a-z)
// Input : F
//Output : TRUE
//Input : &
//Output : FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkAlpha(char cvalue)
{
    if( (cvalue >= 'a')   &&  (cvalue <=  'z')  ||  (cvalue >='A')  &&  (cvalue <= 'Z') )    
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

    bret = ChkAlpha(cvalue);

    if(bret == TRUE)
    {
        printf("It is a character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}