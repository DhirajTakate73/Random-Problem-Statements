//write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

#include<stdio.h>
int countDiff(int ino)
{
    int evensum=0;
    int oddsum=0;
    int ievenoddfiff=0;
    int idigit=0;

    while(ino!=0)
       // OR while(ino>0)
    {
        idigit= ino % 10;
        if(idigit % 2 == 0)  
        {
            evensum +=idigit; 
        }
        else
        {
             oddsum +=idigit; 
        }
        ino/=10;
        
    }

        ievenoddfiff = evensum - oddsum;
        return ievenoddfiff;

}
    
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter number :");
    scanf("%d",&ivalue);

    iret=countDiff(ivalue);
    printf("Difference between summation of even digits and summation of odd digits is:%d",iret);

    return 0;
}