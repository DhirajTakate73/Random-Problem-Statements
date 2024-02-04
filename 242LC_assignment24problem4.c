// Accept character from user and check whether it is Small or not (a-z)
// Input : g
//Output : TRUE
//Input : D
//Output : FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkSmall(char cvalue)
{
    if( (cvalue >='a')  &&  (cvalue <= 'z') )    
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

    bret = ChkSmall(cvalue);

    if(bret == TRUE)
    {
        printf("It is a Small Case character");
    }
    else
    {
        printf("It is not a Small Case character");
    }

    return 0;
}