
//  Accept the number of rows and number of columns from user and display below pattern.

//  Input : irow = 5    icol = 5

/*Output :   1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
*/     

#include<stdio.h>

void pattern(int irow, int icol)
{
    int i=0, j=0, icnt=1;

    for(i=-1; i>=-irow; i--)    //OUTER LOOP FOR ROWS
    {  icnt = 1;
        for(j=-1; j>=-icol; j--)      //INNER LOOP FOR COLUMNS
        {
           if((i % 2)==0)
           {
                printf("%2d",j);
           } 
           else
           {
                printf("%2d",icnt);
                icnt++;
           }      
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
