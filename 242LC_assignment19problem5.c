
//  Accept the number of rows and number of columns from user and display below pattern.

//  Input : irow = 3    icol = 4

/*Output :   1   2   3   4
             5   6   7   8
             9  10  11  12
*/     

#include<stdio.h>

void pattern(int irow, int icol)
{
    int i=0, j=0, icnt=1;

    for(i=1; i<=irow; i++)    //OUTER LOOP FOR ROWS
    {
        for(j=1; j<=icol; j++)      //INNER LOOP FOR COLUMNS
        {
                printf("%d\t",icnt);
                icnt++;                 
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
