// Accept character from user. If it is capital then display all the character from the input characters till Z.
// If input character is small then print all the characters in reverse order till a. In other cases return directly.
// Input : Q
// Output : Q R S T U V W X Y Z
// Input : m
// Output : m l k j i h g f e d c b a

#include<stdio.h>
void Display(char ch)
{
    char ccnt = '\0';

    if(ch >= 'A' && ch<= 'Z')
    {
       for(ccnt=ch; ccnt <= 'Z'; ccnt++)
       {
            printf("%c\t",ccnt);
       }
    }
    else if (ch >= 'a' && ch<= 'z')
    {
       for(ccnt=ch; ccnt >= 'a'; ccnt--)
       {
            printf("%c\t",ccnt);
       }
    }
    else
    {
        printf("%c",ch);
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

