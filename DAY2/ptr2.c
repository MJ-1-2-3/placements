#include<stdio.h>
int main()
{
    int a,b,sum,*p1,*p2;
    a = 100,b = 200;
    p1 = &a;
    p2 = &b;
    sum = *p1 + *p2;
    printf("The sum of the numbers is:\n%d",sum);

}