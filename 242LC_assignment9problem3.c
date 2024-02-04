//write a program which accept distance in kilometer and convert it into meter(1 kilometer=1000 meter)

#include<stdio.h>
int KMtoMeter(int ikilometer)
{
    int imeter=0;
    if(ikilometer<0)
    {
        printf("Invalid Input\n");
    }
    else
    {
        imeter=ikilometer*1000;                     //(1 kilometer=1000 meter)
    }

    return imeter;
}
int main()
{
    int ikilometer=0;
    int iret=0;

    printf("Enter Distance In Kilometer To Covert It Into Meter\n");
    scanf("%d",&ikilometer);

    iret=KMtoMeter(ikilometer);
    
    printf("Distance In Meter Is :%d",iret);

    return 0;
}
//time complexity of above code is :o(1)