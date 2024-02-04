// Write a program which accept string from user and count number of capital letters 
//Input : "Marvellous Multi OS"
//Output : 4

#include<stdio.h>
int CountCapital(char str[])    // str[] is a pointer 
{
    int icnt = 0;

    while(*str !='\0')
    {
        if((*str >='A') && (*str <='Z'))
        {
            icnt++;
        }
        str++;
    }
    return icnt;

}
int main()
{
    char arr[40];
    int iret = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    iret = CountCapital(arr);

    printf("Count of Capital Letters in the entered string is : %d",iret);

    return 0;
}