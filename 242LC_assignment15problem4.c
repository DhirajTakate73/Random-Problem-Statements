//Accept the numbers from user and accept range, display all elements from that range

#include<stdio.h>
#include<stdlib.h>


void Range(int arr[], int isize, int ino1, int ino2)
{
    int icnt=0; 
  
    for(icnt=0; icnt<isize; icnt++)
    {
        if(arr[icnt]>=ino1 && arr[icnt]<=ino2)
        {
            printf("%d\t",arr[icnt]);
        }
        
    }

}
int main()
{
    int icount=0, icnt=0, ivalue1=0, ivalue2=0;
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

    printf("enter the Starting point of the range\n");
    scanf("%d",&ivalue1);

    printf("enter the Ending point of the range\n");
    scanf("%d",&ivalue2);

    Range(p,icount,ivalue1,ivalue2);
    
    free(p);
    printf("\nDynamic memory gets deallocated successfully...");


    return 0;
}

//Time Complexity Of Above Application Is: O(1)