//accept N elements from user and return difference between summation of even elements and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>

    //void display(int *arr, int isize)
    int EvenOddDiff(int arr[], int isize)  
    {
        int icnt=0, ievensum=0, ioddsum=0;
        
            //1         2           3
        for(icnt=0; icnt<isize; icnt++)
        {
            if((arr[icnt] %2 )==0)
            {
                ievensum=arr[icnt]+ievensum;
            }
            if((arr[icnt] %2 )!=0)
            {
                ioddsum=arr[icnt]+ioddsum;
            }
        }
        return ievensum-ioddsum;
    }

int main()
{
    int icount=0,icnt=0,iret=0;
    int *p=NULL;
    printf("enter the number of elements that you want to enter : \n");
    scanf("%d",&icount);

    p=(int *)malloc(icount * sizeof(int));
    printf("dynamic memory gets allocated successfully for %d elements\n",icount);

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("enter the %d values : \n",icount);
        //1         2           3
    for(icnt=0; icnt<icount; icnt++)
    {
        printf("\nenter the element no %d:",icnt+1);
        scanf("%d",&p[icnt]);//4
    }

    iret=EvenOddDiff(p,icount);

    printf("Difference between summation of evenelements and oddelements is :%d\n",iret);

    free(p);  //dynamic memory deallocation
    
    printf("dynamic memory gets deallocated successfully...\n");
    return 0;
}

//Time Complexity Of Above Application Is: O(1)