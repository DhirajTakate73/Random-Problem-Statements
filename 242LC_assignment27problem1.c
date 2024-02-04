// Write a program which accept string from user and convert it into lower case

#include<stdio.h>

void StrLwrx(char str[])         // str[] is pointer.
{
    while(*str !='\0')
    {
        if(*str >= 'A'  &&  *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[40];   //static memory allocation for 39 letters because last is for '\0'.
    char cret = '\0';

    printf("Enter The String : ");
    scanf("%39[^'\n']s",arr);

    StrLwrx(arr);    //base address to *str

    printf("Modified String To Lower Case Is :%s",arr);

    return 0;
}