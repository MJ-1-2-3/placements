#include<stdio.h>
int f1(int n)
{
        int s=0,i=0,p,r;
         while(n>0)
    {
        r = n% 10;
        p = 8 ^ i;
        s = s + p*r;
        i = i + 1;
        n = n / 10;
    }
    return s;

}
int main()
{
    

   
    printf("%d",s);
    return 0;
}