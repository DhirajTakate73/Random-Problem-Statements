//accept N numbers from user and display all such elements which are divisible by 5

#include<stdio.h>
#include<stdlib.h>

void DivisibleBy5(int arr[], int isize)
{
    int icnt=0;

    printf("\nFrom Entered Elements, Elements which are divisible by 5 are : \n");
    for(icnt=0; icnt<isize; icnt++)
    {

        if((arr[icnt]) % 5 == 0)
        {
            printf("%d\t",arr[icnt]);
        }
    }printf("\n");
}
int main()
{
    int icount=0, icnt=0, iret=0;
    int *p=NULL;

    printf("enter the number of elements that you want to enter :");
    scanf("%d",&icount);

    p=(int *)malloc(icount * sizeof(int));
    printf("Dynamic memory gets allocated successfully for %d elements",icount);

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("\nenter the %d values:",icount);
    for(icnt=0; icnt<icount; icnt++)
    {
        printf("\nEnter the element no.%d:",icnt+1);
        scanf("%d",&p[icnt]);
    }

    DivisibleBy5(p,icount);

    free(p);  //dynamic memory deallocation
    
    printf("dynamic memory gets deallocated successfully...\n");
    return 0;
}

//Time Complexity Of Above Application Is: O(1)