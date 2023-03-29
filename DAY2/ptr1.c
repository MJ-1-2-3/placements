#include<stdio.h>
int main()
{
    int a = 12, *ptr;
    ptr = &a;

    printf("Address of a using direct method:%p\n", &a);
    printf("Address of  a from pointer: %p\n",ptr);

    printf("Value of a direct : %d\n",a);
    printf("Value of a from pointers : %d",*ptr);
}