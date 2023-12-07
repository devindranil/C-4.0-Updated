#include <stdio.h>
int sum(int,int); //function protoype or function declaration
int main() //calling function
{
    //function calling
    int a=10,b=20;
    int r;
    r=sum(a,b);//arguments value sum(10,20)
    printf("the sum is: %d",r);
    
    return 0;
}

int sum(int x, int y) //parameter
{
    // logic    int sum = x + y;
    
    int sum=x+y;
    return sum;
    printf("%d",sum);
}

