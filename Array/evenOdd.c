//wap to read an array of 10 integer and count total no of odd number and even number 
#include <stdio.h>
int main()
{
    // Run time example
    int a[10];
    int even=0,odd=0;
    printf("Enter the value of array: \n");
    // LOOP: INPUT - ITEM
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("total no od odd number is: %d\n",odd);
    printf("total no od even number is: %d\n",even);
    //ALGORITHM: Traversal algorithm
    for (int i = 0; i < 10; i++) //
    {
       printf("%d\n",a[i]);//
    }
  
    return 0;
}