#include<stdio.h>
int a=10;//static
int b=20;
//with return type and no arguments
/*int sum(){
    int a=10,b=20,sum=0;
    sum=a+b;
    return sum; 
}

int main(){
    int res;
    res=sum();
    printf("result: %d",res);
    return 0;
}*/
//with arguments but no return type
/*void sum(int x, int y){
    
    int sum=x+y;
    printf("sum is: %d",sum);
    
}
int main(){
    
    int a=10,b=20;
    sum(a,b);
    return 0;
}*/
//with arguments and with return type
/*int sum(int x, int y){
    return (x+y);//return 30
}
int main(){
    int a=10,b=20;
    int r=sum(a,b);
    printf("sum is: %d",r);  
}*/

int fun(int x,int y){
    return a+b;
}

int main(){
    /*int a=10;
    int b=20;*/
    a=20;
    int r=fun(a,b);
    printf("sum is: %d",r);
}