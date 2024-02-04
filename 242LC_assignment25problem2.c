// Accept character from user. If character is small display its corresponding capital character,
// and if it is small then display its corresponding capital. In other cases display as it is.

// Input : Q
// Output : q
// Input : M
// Output : m
// Input : 4
// Output : 4
// Input : %
// Output : %

#include<stdio.h>
void Display(char ch)
{
    if(ch >= 'A' && ch<= 'Z' )
    {
       printf("Converted Character is :%c",ch+32);
    }
    else if (ch >= 'a' && ch<= 'z' )
    {
        printf("Converted Character is :%c",ch-32);
    }
    else
    {
        printf("The Character Is : %c",ch);
    }
}
int main()
{
    char cvalue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cvalue);

    Display(cvalue);

    return 0;

}
