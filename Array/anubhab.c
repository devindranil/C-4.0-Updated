#include <stdio.h>
void primno(){
    int number;
    printf("Enter the number:\t");
    scanf("%d", &number);
    if (number == 1)
    {
        printf("%d the number is not prime number", number);
    }
    else if ((number % 3 != 0) && (number % 2 != 0))
    {
        printf("%d This is a prime number", number);
    }
    else if ((number == 2) || (number == 3))
    {
        printf("%d This is a prime number", number);
    }
    else
    {
        printf("%d is not a prime number", number);
    }
}
int main()
{
    primno();

    return 0;
}