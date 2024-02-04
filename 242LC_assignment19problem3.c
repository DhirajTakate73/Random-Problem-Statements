
//  Accept the number of rows and number of columns from user and display below pattern.

//  Input : irow = 3    icol = 5

/*Output :   A A A A A 
             B B B B B 
             C C C C C 
*/     

#include<stdio.h>

void pattern(int irow, int icol)
{
    int i=0, j=0;
    char ch = '\0';

    for(i=1, ch='A'; i<=irow; i++, ch++)    //OUTER LOOP FOR ROWS
    {
        for(j=1; j<=icol; j++)      //INNER LOOP FOR COLUMNS
        {
                printf("%c\t",ch);             
        }
        printf("\n\n");
    }

    
}

int main()
{ 
    int ivalue1=0, ivalue2=0;

    printf("Enter the number of rows : ");
    scanf("%d",&ivalue1);

    printf("Enter the number of columns : ");
    scanf("%d",&ivalue2);

    pattern(ivalue1, ivalue2);

    return 0;
}
