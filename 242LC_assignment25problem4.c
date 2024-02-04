// Accept character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
// Input : %
// Output : TRUE
// Input : d
// Output : FALSE

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkSpecial(char ch)
{
    if ((ch == '!') || (ch == '@') || (ch == '#') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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
    bool cret = FALSE;

    printf("Enter the character: ");
    scanf("%c",&cvalue);

    cret = ChkSpecial(cvalue);

    if(cret == TRUE)
    {
        printf("It is a special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;
}