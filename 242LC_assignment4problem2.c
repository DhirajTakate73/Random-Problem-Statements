//program which accepta number from user and display its factors in decreasing order.

#include<stdio.h>
void factrev(int ino)
{
    int icnt=0;
    
    
    if(ino<=0)
    {
        ino=-ino;
    }
    for(icnt=ino; icnt>=1; icnt--)
    {
        if((ino % icnt)==0)
        {
            printf("%d\n",icnt);   
        }  
    }
    
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter Number");
    scanf("%d",&ivalue);

   factrev(ivalue);
    

    return 0;
}