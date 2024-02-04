//write a program which accept area in square feet and convert it into square meter.(1 square feet=0.0929 square meter).

#include<stdio.h>
double SquareMeter(int ivalue)
{
    double darea=0.0;
    darea=ivalue*0.0929;       //(1 square feet=0.0929 square meter).
    return darea;
}
int main()
{
    int ivalue=0.0;
    double dret=0.0;

    printf("Enter Area in square feet To Covert It Into square meter\n");
    scanf("%d",&ivalue);

    dret=SquareMeter(ivalue);
    
    printf("Area In Square Meter Is :%lf",dret);

    return 0;
}
//time complexity of above code is :o(1)