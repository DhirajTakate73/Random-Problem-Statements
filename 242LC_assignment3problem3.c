//write a program which accepts number from user and print even factors of that number

#include<stdio.h>
void displayevenfactor(int ino)
{
    int i=0;
    if(ino<=0)
    {
        ino=-ino;
    }
   
    for(i=1; i<ino; i++)           
    {
        
        if((ino % i)==0 && i % 2 ==0)
        { 
                printf("%d\n",i); 
        } 
    }
}
int main()
{
    int ivalue=0;
    printf("Enter Number");
    scanf("%d",&ivalue);

    displayevenfactor(ivalue);

    return 0;
}