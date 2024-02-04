//write a program which accepts three numbers and print its multiplication.

#include<stdio.h>

int Multiply(int ino1,int ino2,int ino3)
{   
   
    int ians=0;
    if((ino1==0) && (ino2==0))
    {
        ians=ino3;
        return ians;
    }
    else if((ino2==0) && (ino3==0))
    {
        ians=ino1;
        return ians;
    }
    else if((ino1==0) && (ino3==0)==0)
    {
        ians=ino2;
        return ians;
    }
    else if(ino1==0)
    {
        ians=ino2*ino3;
        return ians;
    }
    else if(ino2==0)
    {
        ians=ino1*ino3;
        return ians;
    }
    else if(ino3==0)
    {
        ians=ino1*ino2;
        return ians;
    }
    
    else
    {
        ians=ino1*ino2*ino3;
        return ians;
    }

}
int main()
{
    int ivalue1=0, ivalue2=0, ivalue3=0;
    int iret=0;

    
    printf("please enter three numbers :\n");
    scanf("%d %d %d", &ivalue1,&ivalue2,&ivalue3);
    
    iret=Multiply(ivalue1,ivalue2,ivalue3);

    printf("Multiplication of entered 3 numbers is : %d",iret);

    return 0;
}