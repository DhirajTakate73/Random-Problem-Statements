//write a program which accepts number from user and print its number line

#include<stdio.h>
void Display(int ino)
{
    int icnt=-ino;

    for(; icnt<=ino; icnt++)   //In this code, we start the icnt variable at the negative value of ino, and then we use a single loop to print the numbers from -ino to ino,
                              // which will give desired output.
    {
        printf(" %d ",icnt);
    }

}

int main()
{
    int ivalue=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}

//time complexity of this program is : O(2N)