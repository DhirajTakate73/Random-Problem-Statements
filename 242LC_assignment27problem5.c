// Write a program which accept string from user and count number of white spaces.

#include<stdio.h>

int CountWhiteSpaces(char str[])         // str[] is pointer.
{
    int icnt = 0;

    while(*str !='\0')
    {
         if(*str == ' ')
        {
            icnt++;
        }
        str++;
    }
    return icnt;
         
}

int main()
{
    char arr[50];   //static memory allocation for 49 letters because last is for '\0'.
    int iret = 0;

    printf("Enter The String : ");
    scanf("%49[^'\n']s",arr);

    iret = CountWhiteSpaces(arr);    //base address to *str

    printf("Number Of White Spaces In The Entered String Are : %d",iret);

    return 0;
}