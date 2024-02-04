//write a program which accept range from user and display all even numbers in between that range

#include<stdio.h>
void RangeDisplayEven(int istart, int iend)
{
    if(istart>=iend || -istart>-iend)
    {
        for(istart; istart<=iend; istart++)
    {
        if(istart%2==0)
        {printf("%d ",istart);}
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
    {RangeDisplayEven(ivalue1, ivalue2);}


    return 0;
}

//time complexity of above code is :o(1) to o(iend-istart)
