//  Accept number from user and display below code
//Input : 5
//Output : A B C D E

#include<stdio.h>

void pattern(int ino)
{
    int icnt=0;
    char ch='\0';

    for(icnt=1, ch='A'; icnt<=ino; icnt++,ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");

}
int main()
{
    int ivalue=0;

    printf("Enter the number of elements : ");
    scanf("%d",&ivalue);

    pattern(ivalue);

    return 0;
}

//  Time Complexity Of The above code is : O(N)