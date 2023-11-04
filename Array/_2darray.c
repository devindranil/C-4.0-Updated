#include <stdio.h>
int main()
{
    int a[2][3], i, j,sum=0;
    int sumRow, sumCol;
    printf("Enter elements of matrix: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    /*Print the matrix*/
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            //sum=sum+a[i][j];
        }
        printf("\n");
    }
    //printf("sum=%d",sum);
    /*sum of individual row and col*/

    for (i = 0; i < 2; i++)
    {
        sumRow = 0;
        sumCol = 0;
        for (j = 0; j < 3; j++)
        {
            sumRow = sumRow + a[i][j];
            sumCol = sumCol + a[j][i];
        }
        printf("\n");
        printf("Sum of row %d is %d\n", i + 1, sumRow);
        printf("Sum of col %d is %d", i + 1, sumCol);
    }




}