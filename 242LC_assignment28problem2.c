// Write a program which accept string from user and accept one character. return frequency of that character.

#include<stdio.h>

int CountCharFreq(char str[], char ch)
{
   int icnt = '\0';

    //for(icnt = 0; str[icnt] != '\0' ; icnt++)
    while(*str != '\0')
    {
        if(*str == ch)
        {
           icnt++;
        }
        str++;
           
    }
    return icnt;
    
}

int main()
{
    char arr[50];
    char cvalue = '\0';
    int iret =0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character that you want to check It's Frequency in the entered string : ");
    scanf(" %c",&cvalue);

    iret = CountCharFreq(arr, cvalue);

    printf("Frequency of Entered character in the entered string is : %d Times...\n",iret);

    return 0;
}