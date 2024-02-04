//Accept numbers from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>


int OddProduct(int arr[], int isize)
{
    int icnt=0; 
    int iProduct=1;
    for(icnt=0; icnt<isize; icnt++)
    {
        if((arr[icnt] % 2)!= 0)
        {
            iProduct=(arr[icnt]*iProduct);
        }
        
    }
    return iProduct;
}
int main()
{
    int icount=0, icnt=0, iret=0;
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

    iret=OddProduct(p,icount);
    printf("Product of odd elements is:%d",iret);

    free(p);
    printf("\nDynamic memory gets deallocated successfully...");


    return 0;
}