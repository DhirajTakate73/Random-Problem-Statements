//write a program which accepts name from user and print that name(user enters name with space in it)

#include<stdio.h>
int main()
{
    char Name[30];
    printf("please enter full name:  \n");
    scanf(" %30[^\n]", Name);       //" %30[^\n]" this format specifier reads upto 30character until it encounters new line character so we can input a name with spaces

    printf("your name is : %s",Name);

    return 0;
}