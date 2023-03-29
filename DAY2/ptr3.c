#include<stdio.h>
int main()
{
    int a=100,b=10,*p,*q,temp;
    p = &a;
    q = &b;
    temp = *p;
    *p =* q;
    *q = temp;
    a = *p;
    b = *q;

    printf("After swapping  using temporary variable\n %d\t%d",a,b);

    printf("%f",*p/ *q);


}