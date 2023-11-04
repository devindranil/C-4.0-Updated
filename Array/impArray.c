//Read 5 students marks, calculate total and average 
#include <stdio.h>
int main()
{
    int a[5],b[5],c[5];

    printf("Enter the items of array a: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the items of array b: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("The items of array c is: \n");
    for(int i=0;i<5;i++)
    {
        c[i] = a[i] + b[i];
        printf("Sum of array elements at index %d is %d\n",i,c[i]);
    }
    
    
    
    return 0;
}