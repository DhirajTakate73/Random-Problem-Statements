//write a program which accept range from user and return addition of all numbers in between that range.
//(range should contains positive numbers only).

#include<stdio.h>
void RangeSum(int istart, int iend)
{
    int isum=0;
    if(istart>=iend || -istart>-iend)
    {
        for(istart; istart<=iend; istart++)
    {
        isum+=istart;
        
    }

    }
    printf("%d",isum);
      
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;

    printf("enter starting point");
    scanf("%d",&ivalue1);

    printf("enter ending point");
    scanf("%d",&ivalue2);

    if(ivalue1<0 || ivalue2<0 || ivalue1>ivalue2)
    {printf("invalid range");}
    else
    {RangeSum(ivalue1, ivalue2);}

    return 0;
}

//time complexity of above code is :o(1) to o(iend-istart)
