//write a program which accept width and height of rectangle from user and calculate its area(area= width * height)

#include<stdio.h>
double RectArea(float fwidth, float fheight)
{
   
    double dArea=0;
    
    dArea=fwidth*fheight;          //(area= width * height)

    return dArea;
}
int main()
{
    float fwidth=0.0;
    float fheight=0.0;
    double dret=0.0;

    printf("Enter width of rectangle to calculate area\n");
    scanf("%f",&fwidth);

    printf("Enter height of rectangle to calculate area\n");
    scanf("%f",&fheight);

    dret=RectArea(fwidth,fheight);
    
    printf("Area Of Rectangle Is :%lf Square Units",dret);

    return 0;
}
//time complexity of above code is :o(1)