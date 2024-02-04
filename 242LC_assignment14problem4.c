//Accept N numbers from user and return frequency of 11 from it.

#include<stdio.h>
#include<stdlib.h>

int Chk11Freq(int arr[], int isize)
{
    int icnt=0, freq11=0;

    for(icnt=0; icnt<isize; icnt++)
    {
        if(arr[icnt]==11)
        {
           freq11++;
        }
          
    }
    return freq11;
}
int main()
{
    int icount=0, icnt=0;
    int *p=NULL;
    int iret=0;

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

    iret=Chk11Freq(p,icount);
    printf("Frequency of 11 is %d times...",iret);

    free(p);
    printf("\nDynamic memory gets deallocated successfully...");


    return 0;
}

//Time Complexity Of Above Application Is: O(1)