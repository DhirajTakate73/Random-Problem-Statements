//Accept N numbers from user and Accept one another number as No, Check whether NO is present or not

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int bool;


bool Check(int arr[], int isize, int ino)
{
    int icnt=0; 

    for(icnt=0; icnt<isize; icnt++)
    {
        if(arr[icnt] == ino)
        {
           return TRUE;
        }
          
    }
    return FALSE;
}
int main()
{
    int icount=0, icnt=0, ivalue=0;
    bool bret=FALSE;
    int *p=NULL;
   
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

    printf("enter the element that you want to search\n");
    scanf("%d",&ivalue);

    bret=Check(p,icount,ivalue);
    if(bret==TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
    free(p);
    printf("\nDynamic memory gets deallocated successfully...");


    return 0;
}

//Time Complexity Of Above Application Is: O(1)