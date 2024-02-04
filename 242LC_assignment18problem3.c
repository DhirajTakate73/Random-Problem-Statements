//  Accept the number of rows and number of columns from user and display below pattern.

//  Input : irow = 3    icol = 5

/*Output :  5 4 3 2 1
            5 4 3 2 1 
            5 4 3 2 1
*/     

#include<stdio.h>

void pattern(int irow, int icol)
{
    int i=0, j=0;

    for(i=1; i<=irow; i++)    //OUTER LOOP FOR ROWS
    {
        for(j=icol; j>=1; j--)      //INNER LOOP FOR COLUMNS
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