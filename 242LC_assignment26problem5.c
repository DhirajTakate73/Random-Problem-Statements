// Write a program which accept string from user and display it in reverse order.

#include<stdio.h>

void Reverse(char str[])    // str[] is a pointer 
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
    char arr[40];

    printf("Enter the string : ");
    scanf("%39[^\n]",arr);

    Reverse(arr);

    return 0;
}