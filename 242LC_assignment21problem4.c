
//  Accept the number of rows and number of columns from user and display below pattern.

//  Input : irow = 6   icol = 5

/*Output :    * * * * * 
              * @ @ @ *
              * @ @ @ *
              * @ @ @ *
              * @ @ @ *
              * * * * *

*/     

#include<stdio.h>

void pattern(int irow, int icol)
{
    int i=0, j=0 ;

    for(i=1; i<=irow; i++)    //OUTER LOOP FOR ROWS
    {
        for(j=1; j<=icol; j++)      //INNER LOOP FOR COLUMNS
        {
           if(j==1 || j==icol || i==irow || i==1)
           {
            printf("*\t");
           }
           else
           {
            printf("@\t");
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
