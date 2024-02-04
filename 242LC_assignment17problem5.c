//  Accept number from user and display below code
//Input : 8
//Output :  2 4 6 8 10 12 14 16

#include<stdio.h>

void pattern(int ino)
{
    int icnt=0;

    for(icnt=1; icnt<=ino * 2; icnt++)
    {
        if((icnt % 2) == 0)
        {
            printf("%d\t",icnt);
        }
        
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