// Write a program which accept string from user and reverse that string.

#include<stdio.h>

void StrRevx(char str[])
{
    printf("Entered String In Reverse Order Is : ");

    int ilength = 0;

    while (str[ilength] != '\0')
    {
        ilength++;
    }
    for(int j= ilength - 1 ; j>= 0 ; j--)
    {
        printf("%c",str[j]);
    }
    printf("\n");
    
}

int main()
{
    char arr[50];

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    StrRevx(arr);

    return 0;
}