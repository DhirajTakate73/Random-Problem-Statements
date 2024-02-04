// Write a program which displays ASCII table. Table contains symbol, decimal, hexadecimal and octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    int icnt=0;

    printf("--------------------------------------------------------------------------\n");
    printf("----------------------------ASCII TABLE-----------------------------------\n");
    printf("--------------------------------------------------------------------------\n");

    for(icnt=0; icnt<=127; icnt++)
    {
        printf("%c\t%d\t%o\t%x\n",icnt,icnt,icnt,icnt);
    }
    printf("-----------------------------------------------------------------------------\n");

}
int main()
{
    DisplayASCII();

    return 0;
}