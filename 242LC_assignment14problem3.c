//Accept N numbers from user and check whether that numbers contains 11 in it or not.

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool Chk11(int arr[], int isize)
{
    int icnt=0;

    for(icnt=0; icnt<isize; icnt++)
    {
        if(arr[icnt]==11)
        {
           return TRUE;
        }
          
    }
    return FALSE;
}
int main()
{
    int icount=0, icnt=0;
    int *p=NULL;
    bool bret=FALSE;

    printf("\nEnter the number of elements that you want to enter: ");
    scanf("%d",&icount);

    p=(int *)malloc(icount * sizeof(int));
    printf("Dynamic memory gets allocated for %d elements successfully that you have entered",icount);

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("\nEnter the %d Elements:",icount);
    for(icnt=0; icnt<icount; icnt++)
    {
        printf("\nEnter element no.%d:",icnt+1);
        scanf("%d",&p[icnt]);
    }

    bret=Chk11(p,icount);
    if(bret==TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not there");
    }

    free(p);
    printf("\nDynamic memory gets deallocated successfully...");


    return 0;
}

//Time Complexity Of Above Application Is: O(1)