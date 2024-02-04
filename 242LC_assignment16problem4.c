//Accept N numbers from user and display all such numbers which contains 3 digits in it

#include<stdio.h>
#include<stdlib.h>

void Digits(int arr[], int ino)
{
    int icnt=0;

    printf("Three digit numbers in the entered elements are: ");
    for(icnt=0; icnt<ino; icnt++)
    {
        if(arr[icnt]>=100 && arr[icnt]<=999)
        {
            printf("%d\t",arr[icnt]);
        }
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

    Digits(p, icount);

    free(p);
    printf("\nDynamic memory gets deallocated successfully...");

    return 0;
}

//Time complexity of above code is : O(N)