#include <stdio.h>
int main()
{
    // Run time example
    int rollNo[5];
    printf("Enter the value of array: ");
    // LOOP: INPUT - ITEM
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&rollNo[i]);
    }
    printf("the value of the array is: ");
    //ALGORITHM: Traversal algorithm
    for (int i = 4; i >=0; i--) // i=0 1 2 3 4 5
    {
        printf("%d\n", rollNo[i]); // 1 2 3 4 5
    }

    return 0;
}