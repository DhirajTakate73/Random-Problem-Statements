//accept character from user and check whether that character is vowel(a,e,i,o,u) or not.
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool chkvowel(char character)
{
    if(character=='a' || character=='e' || character=='i' || character=='o' ||character=='u' || character=='A' || character=='E' || character=='I' || character=='O' ||character=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    

}

int main()
{
    char cvalue='\0';
    bool bret=FALSE;

    printf("Enter Character\n");
    scanf("%c",&cvalue);

    bret=chkvowel(cvalue);

    if(bret==TRUE)
    {
        printf("it is vowel\n");
    }
    else
    {
        printf("it is not vowel\n");
    }
    
    return 0;
}