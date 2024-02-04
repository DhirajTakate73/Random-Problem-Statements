
//  Accept the number of rows and number of columns from user and display below pattern.

//  Input : irow = 4    icol = 4

/*Output :   A B C D 
             a b c d
             A B C D 
             a b c d
*/     

#include<stdio.h>

void pattern(int irow, int icol)
{
    int i=0, j=0;
    char ch = '\0';

    for(i=1, ch='A'; i<=irow; i++,ch++)    //OUTER LOOP FOR ROWS
    {
        for(j=1, ch='A'; j<=icol; j++,ch++)      //INNER LOOP FOR COLUMNS
        {
            if(( i % 2 ) == 0 )
            {
                printf("%c\t",ch+32); 
            }
            else
            {
                printf("%c\t",ch);
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
