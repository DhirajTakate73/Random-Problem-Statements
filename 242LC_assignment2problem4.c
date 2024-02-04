#include<stdio.h>

void display(int ino, int ifrequency)
{
    if(ifrequency<0)                //updator
    {
       ifrequency=-ifrequency;
    }

    int icnt=0;
    for(icnt=0; icnt<ifrequency; icnt++)
    {
        printf("%d",ino);
    }
}

    
   

int main()
{
    int ivalue=0;
    int icount=0;

    printf("Enter Number");
    scanf("%d",&ivalue);

    printf("Enter frequency");
    scanf("%d",&icount);


    display(ivalue, icount);

    return 0;
}