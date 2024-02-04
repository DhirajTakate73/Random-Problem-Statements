//write a program which accepts number from user and display its multiplication of factors.
#include<stdio.h>
int mulfact(int ino)
{
    int icnt=0;
    int multiplication=1;
    
    if(ino<=0)
    {
        ino=-ino;
    }
    for(icnt=1; icnt<ino; icnt++)
    {
        if((ino % icnt)==0)
        {
            printf("%d\n",icnt);
            multiplication *=icnt;
            
        }
         
    }
    return  multiplication;
    
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter Number");
    scanf("%d",&ivalue);

    iret=mulfact(ivalue);
    printf("multiplication of factors is:%d\n",iret);
    

    return 0;
}