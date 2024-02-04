// Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters 

#include<stdio.h>
int SmallCapitalDiff(char str[])    // str[] is a pointer 
{
    int icapitalcnt = 0;
    int ismallcnt = 0;

    while(*str !='\0')
    {
        if((*str >='a') && (*str <='z'))
        {
            ismallcnt++;
             str++;
        }
       
        
        else if((*str >='A') && (*str <='Z'))
        {
            icapitalcnt++;
            str++;
        }
        

    }
    return ismallcnt - icapitalcnt;

}
int main()
{
    char arr[40];
    int iret = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    iret = SmallCapitalDiff(arr);

    printf("Difference Between count of Capital and Count of Small Characters in the entered string is : %d",iret);

    return 0;
}