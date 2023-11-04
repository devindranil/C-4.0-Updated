//Read 5 students marks, calculate total and average 
#include <stdio.h>
int main()
{
    // Run time example
    int marks[5];
    int sum=0,avg=0;
    printf("Enter the value of array: ");
    // LOOP: INPUT - ITEM
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("the value of the array is: ");
    //ALGORITHM: Traversal algorithm
    for (int i = 0; i < 5; i++) //i=0 1
    {
       sum = sum+marks[i]; // 0+50=50 50+45=95
    }
    avg = sum/5;
    printf("The sum is :%d",sum);
    printf("The sum is :%d",avg);
    
    return 0;
}