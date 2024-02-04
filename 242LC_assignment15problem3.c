//Accept N numbers from user and accept one another number as NO, return index of the last occurrence of that NO

#include<stdio.h>
#include<stdlib.h>


int LastOcc(int arr[], int isize, int ino)
{
    int icnt=0; 
    int Locc=-1;
    for(icnt=0; icnt<isize; icnt++)
    {
        if(arr[icnt] == ino)
        {
            Locc=icnt;
        }
        
    }
    return Locc;
}
int main()
{
    int icount=0, icnt=0, ivalue=0, iret=0;
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

    iret=LastOcc(p,icount,ivalue);
    if(iret==-1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurrence of %d is %d",ivalue,iret);
    }
    
    free(p);
    printf("\nDynamic memory gets deallocated successfully...");


    return 0;
}

//Time Complexity Of Above Application Is: O(1)