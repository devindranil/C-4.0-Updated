#include <stdio.h>
int main()
{
    /*int a=10;
    int *p=&a;
    printf("address of variable a is: %x\n",&a);
    printf("value of pointer p: %x",p);*/

    int a = 10, b = 20, c;
    int *p, *q;
    p = &a;
    q = &b;
    c = *q;
    printf("a=%d\n", a);
    *p = 20;
    printf("Value of a=%d\n", a);
    printf("value of a(using pointer)=%d\n", p);

    return 0;
}