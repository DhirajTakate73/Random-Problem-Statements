//write a program which accept radius of circle from user and calculate its area.
//consider value of PI as 3.14.(area=PI*Radius*Radius).

#include<stdio.h>
double CircleArea(float fradius)
{
   float PI=3.14;
    double dArea=0;
    
    dArea=PI*fradius*fradius;               //(area=PI*Radius*Radius).
    
    return dArea;
}
int main()
{
    float fvalue=0.0;
    double dret=0.0;

    printf("Enter radius of circle to calculate area");
    scanf("%f",&fvalue);

    dret=CircleArea(fvalue);
    
    printf("Area Of Circle Is :%lf",dret);

    return 0;
}
//time complexity of above code is :o(1)