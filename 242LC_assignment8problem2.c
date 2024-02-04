//accept amount in us doller and return its corresponding value in indian currency.
// consider as 1$ as 70 rupees
#include<stdio.h>
int DollerToINR(int ino)
{
    
    int INR=0;

    INR=ino*70;

    return INR;

}
int main()
{
    int ivalue=0;
    int iret=0;
    printf("please enter doller amount you want to convert in INR\n");
    scanf("%d",&ivalue);

    iret=DollerToINR(ivalue);

    printf("Amount in INR is %d",iret);
    

    return 0;
}
//The time complexity of the provided code is O(1)