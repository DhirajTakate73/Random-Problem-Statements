//Accept N numbers from user and return the difference between largest and smallest element


#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

int Minimum(int arr[], int ino)
{
    int icnt=0;
    int imin=arr[0];
    int imax=arr[0];

    for(icnt=0; icnt<ino; icnt++)
    {
        if(arr[icnt]>imax)
        {
            imax=arr[icnt];
        }
        if(arr[icnt]<imin)
        {
            imin=arr[icnt];
        }
    }
    return imax-imin;
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

    iret=Minimum(p, icount);
    printf("\nDifference between largest and smallest element is:%d",iret);

    free(p);
    printf("\nDynamic memory gets deallocated successfully...");

    return 0;
}

//Time complexity of above code is : O(N)