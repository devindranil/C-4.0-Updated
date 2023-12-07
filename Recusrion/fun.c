#include<stdio.h>
int sum(int,int);
int main(){
    int r;
    r=sum(5,4);
    printf("The sum is: %d",r);
    return 0;
}
int sum(int x, int y)
{
    if(y==0){
        return x;
    }else{
        return sum(x+1,y-1);//rec function
    }
}