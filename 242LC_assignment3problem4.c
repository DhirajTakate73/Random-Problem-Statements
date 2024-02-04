//accept one character from user and convert case of that character 
#include<stdio.h>
void displayconvert(char dvalue)
{
    if(dvalue>='a' && dvalue <='z')
    {
        char uppercase = dvalue - 32;
        printf("%c",uppercase);
    }
    else if(dvalue>='A' && dvalue<='Z')
    {
        char lowercase = dvalue + 32;
        printf("%c",lowercase);
    }
}
int main()
{
    char cvalue='\0';

    printf("Enter character\n");
    scanf("%c",&cvalue);

    displayconvert(cvalue);

    return 0;
}