//write a program which accept range from user and diplay all numbers in between that range.

#include<stdio.h>
void RangeDisplay(int istart, int iend)
{
    if(istart>=iend || -istart>-iend)
    {
        for(istart; istart<=iend; istart++)
    {
        printf("%d ",istart);
    }
    }
    
      
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;

    printf("enter starting point");
    scanf("%d",&ivalue1);

    printf("enter ending point");
    scanf("%d",&ivalue2);
    if(ivalue1>ivalue2)
    {printf("invalid range");}
    else
    {
            RangeDisplay(ivalue1, ivalue2);
    }


    return 0;
}
 
//time complexity of above code is :o(1) to o(iend-istart)

