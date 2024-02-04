// Write a program which accept string from user and check whether it contains vowels in it or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkVowel(char str[])    // str[] is a pointer 
{

    while(*str !='\0')
    {
        if((*str =='a') || (*str =='e') || (*str =='i') || (*str =='o') || (*str =='u') || (*str =='A') || (*str =='E') || (*str =='I') || (*str =='O') || (*str =='U'))
        {
            return TRUE;
        }
        str++;
       
    }

}
int main()
{
    char arr[40];
    bool bret = FALSE;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    bret = ChkVowel(arr);

    if(bret == TRUE)
    {
        printf("Entered String Contains Vowels In It");
    }
    else
    {
        printf("Entered String Does Not Contain Any Vowels In It");
    }

    return 0;
}