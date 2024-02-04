// Write a program which accept string from user and accept one character. check whether that character is present in string or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkChar(char str[], char ch)
{
    char c = '\0';

    //for(icnt = 0; str[icnt] != '\0' ; icnt++)
    while(*str != '\0')
    {
        if(str[c] == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[50];
    char cvalue = '\0';
    bool bret = FALSE;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character that you want to check whether it is present in the entered string or not : ");
    scanf(" %c",&cvalue);

    bret = ChkChar(arr, cvalue);

    if(bret == TRUE)
    {
        printf("Character Found...\n");
    }
    else
    {
        printf("Character not found...\n");
    }

    return 0;
}