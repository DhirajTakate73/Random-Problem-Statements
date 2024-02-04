#include<stdio.h>

int Divide(int ino1, int ino2)
{
    int ians=0;
    if(ino2>ino1)
    {
        return -1;
    }

    ians=ino1/ino2;

    return ians;
}
int main()
{
    int ivalue1=15, ivalue2=5;
    int iRet=0;

    iRet=Divide(ivalue1,ivalue2);

    printf(" Division is %d",iRet);

    return 0;
}