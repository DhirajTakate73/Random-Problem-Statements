//  Accept the number of rows and number of columns from user and display below pattern.

//  Input : irow = 4    icol = 3

/*Output :     1  2  3 
               1  2  3 
               1  2  3 
               1  2  3 
*/  

#include<stdio.h>

void pattern(int irow, int icol)
{
    int i=0, j=0;

    for(i=1; i<=irow; i++)    //OUTER LOOP FOR ROWS
    {
        for(j=1; j<=icol; j++)      //INNER LOOP FOR COLUMNS
        {
            printf("%d\t",j);
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