#include<stdio.h>
int fibo(int x){
    if(x==0 || x==1){
        return x;
    }else{
        return fibo(x-1)+fibo(x-2);
    }
}
int main()
{
    int n,r;
    printf("Enter the value: \n");
    scanf("%d",&n);
    r=fibo(n);
    printf("The value of %d term is %d",n,r);
    return 0;
}