//  Accept number from user and display below code
//Input : 5
//Output : 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>

void pattern(int ino)
{
    int icnt=0;

    for(icnt=ino; icnt>=1; icnt--)
    {
        printf("%d\t#\t",icnt);
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