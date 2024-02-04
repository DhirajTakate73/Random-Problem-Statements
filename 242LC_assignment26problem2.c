// Write a program which accept string from user and count number of small letters 
//Input : "Marvellous"
//Output : 9

#include<stdio.h>
int Countsmall(char str[])    // str[] is a pointer 
{
    int icnt = 0;

    while(*str !='\0')
    {
        if((*str >='a') && (*str <='z'))
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

    iret = Countsmall(arr);

    printf("Count of Small Letters in the entered string  is : %d",iret);

    return 0;
}