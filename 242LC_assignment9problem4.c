//write a program which accept temperature in fahrenheit and convert it into celsius.(1 celsius= (fahrenheit-32)*(5/9)).

#include<stdio.h>
double FhtoCs(float fvalue)
{
    double dcelsius=0.0;
    dcelsius=((fvalue-32)*(5.0/9.0));       //(1 celsius= (fahrenheit-32)*(5/9)). 
    return dcelsius;
}
int main()
{
    float fvalue=0.0;
    double dret=0.0;

    printf("Enter temperature in fahrenheit To Covert It Into celsius\n");
    scanf("%f",&fvalue);

    dret=FhtoCs(fvalue);
    
    printf("Temperature in celcius Is :%lf",dret);

    return 0;
}
//time complexity of above code is :o(1)