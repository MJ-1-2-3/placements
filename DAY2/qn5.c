#include<stdio.h>
int main()
{
    char str[10];
    int m=0,n=0,i=0;

    printf("Enter the string\n");
    gets(str);

    while(i < strlen(str))
    {
        if(str[i] == '*')
        {
            m++;
        }
        else if (str[i] == '#')
        {
            n++;
        }
        i++;

    }
    printf("%d",(m-n));

}