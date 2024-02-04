//Accept N numbers from user and display summation of digits of each number

#include<stdio.h>
#include<stdlib.h>

int Sum(int ivalue) //the entered elements from user gets stored into an array and then according to array index arr[icnt], value of each element  will be copied here and then digits of each element will separated and all digits of each element gets added in this function and then returned to SumOfDigits function.
{
    int idigit=0, isum=0; 

    while(ivalue !=0)
    {
        idigit=ivalue % 10;
        ivalue=ivalue / 10;
        isum= isum + idigit;
    }
    return isum;
}
void DigitsSum(int arr[], int ino)
{
    int icnt=0, idigit=0, isum=0;

    printf("summation of digits of each number is : ");

    for(icnt=0; icnt<ino; icnt++)
    {
        int SumOfDigits=Sum(arr[icnt]); //calling function from function
        printf("%d\t",SumOfDigits);
    }
}
int main()
{
    int icount=0, icnt=0, iret=0;
    int *p=NULL;
    printf("\nEnter the number of elements that you want to enter:");
    scanf("%d",&icount);

    p=(int *)malloc(icount * sizeof(int));
    printf("\ndynamic memory gets allocated for %d elements successfully...",icount);

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("\nEnter the elements %d elements:",icount);
    for(icnt=0; icnt<icount; icnt++)
    {
        printf("\nEnter the %dst element:",icnt+1);
        scanf("%d",&p[icnt]);
    }

    DigitsSum(p, icount);

    free(p);
    printf("\nDynamic memory gets deallocated successfully...");

    return 0;
}

//Time complexity of above code is : O(N)