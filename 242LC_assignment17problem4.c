//  Accept number from user and display below code
//Input : 4
//Output :  # 1 * # 2 * # 3 * # 4 *

#include<stdio.h>

void pattern(int ino)
{
    int icnt=0;

    for(icnt=1; icnt<=ino; icnt++)
    {
        printf("#\t%d\t*\t",icnt);
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