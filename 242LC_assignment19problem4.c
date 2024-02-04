
//  Accept the number of rows and number of columns from user and display below pattern.

//  Input : irow = 3    icol = 4

/*Output :   4 4 4 4 4 
             3 3 3 3 3
             2 2 2 2 2
             1 1 1 1 1
*/     

#include<stdio.h>

void pattern(int irow, int icol)
{
    int i=0, j=0;

    for(i=irow; i>=1; i--)    //OUTER LOOP FOR ROWS
    {
        for(j=1; j<=icol; j++)      //INNER LOOP FOR COLUMNS
        {
                printf("%d\t",i);                    
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
