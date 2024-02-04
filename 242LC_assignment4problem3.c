//write a program which accept number from user and display all its non factors.

#include<stdio.h>
void nonfact(int ino)
{
    int icnt=0;
    
    
    if(ino<=0)
    {
        ino=-ino;
    }
    
    for(icnt=1; icnt<=ino; icnt++)
    {
        if((ino % icnt)!=0)
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

   nonfact(ivalue);
    

    return 0;
}