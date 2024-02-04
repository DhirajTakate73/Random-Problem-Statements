//write a program which accept range from user and display all numbers in between that range in reverse order

#include<stdio.h>
void RangeDisplayRev(int istart, int iend)
{
    if(istart>=iend || -istart>-iend)
    {
        for(iend; iend>=istart; iend--)
    {
        printf("%d ",iend);
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
        RangeDisplayRev(ivalue1, ivalue2);
    }
    return 0;
}
 
//time complexity of above code is :o(1) to o(iend-istart)
