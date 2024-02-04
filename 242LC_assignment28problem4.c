//  Write a program which accept string from user and accept one character . return index of Last occurrence of that character

#include<stdio.h>

intCkhLastOcc(const char str[], const char ch)
{
    int iindex = -1;
    int icnt = 0;

    for(icnt = 0; str[icnt] !='\0'; icnt++)
    {
        if(str[icnt] == ch)
        {
            iindex = icnt;
        }
        
    }
    return iindex;
}

int main()
{
    char arr[50];
    char cvalue = '\0';
    int iret = 0;

    printf("Enter the string : ");
    scanf("%s",arr);

    printf("Enter the character to find its Last occurance in the entered string : ");
    scanf(" %c",&cvalue);

    iret = CkhLastOcc(arr, cvalue);

    if (iret != -1) 
    {
        printf("The Last occurrence of %c is at index %d\n", cvalue, iret);
    }
    else 
    {
        printf("Character %c not found in the string\n", cvalue);
    }

    return 0;
}