
//  Accept the number of rows and number of columns from user and display below pattern.

//  Input : irow = 3    icol = 4

/*Output :   2 4 6 8 10
             1 3 5 7 9
             2 4 6 8 10 
             1 3 5 7 9
*/     

#include<stdio.h>

void pattern(int irow, int icol)
{
    int i=0, j=0, icnt=0;

    for(i=1; i<=irow; i++)    //OUTER LOOP FOR ROWS
    {
        for(j=1; j<=icol; j++)      //INNER LOOP FOR COLUMNS
        {
           int start = (i % 2 == 0) ? 2 : 1;
            int value = start + 2 * (j - 1);
            printf("%d",value);
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
