// Accept character from user and display its ASCII value in deciamal, octal and hexadecimal format.

#include<stdio.h>

void Display(char ch)
{
    printf("ASCII Value In Decimal : %d\n",ch);

    printf("ASCII Value In Octal : %o\n",ch);
    
    printf("ASCII Value In HexaDecimal : %x\n",ch);
}

int main()
{
    char cvalue = '\0';

    printf("\nEnter the character to display its ASCII value in decimal, octal and hexadecimal format : ");
    scanf("%c",&cvalue);

    Display(cvalue);
    
    return 0;

}