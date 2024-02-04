// Write a program which accept string from user and Display only digits from that string.

#include<stdio.h>

void DisplayDigit(char str[])         // str[] is pointer.
{
    int icnt = 0;

   printf("Digits in the entered string are : "); 

    for(icnt=0; str[icnt] !='\0'; icnt++)
    {
        if(str[icnt] >= '0'  &&  str[icnt] <= '9')
        {
            printf("%c\t",str[icnt]);
        }
       
    }
}

int main()
{
    char arr[40];   //static memory allocation for 39 letters because last is for '\0'.
    char cret = '\0';

    printf("Enter The String : ");
    scanf("%39[^'\n']s",arr);

    DisplayDigit(arr);    //base address to *str

    return 0;
}