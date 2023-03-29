#include<stdio.h>
int main()
{
    int arr[10],i,n,sum=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    for(i=0;i<n;i++)
    {
        sum +=  arr[i];
    }
    printf("%d",sum);

    int chk = 1;

    for(i=2;i<(sum/2);i++)
    {
        if(sum % i == 0)
        {
            printf("Inside the loop");
            chk = 0;
            break;
        }
        else
        {
            chk = 1;

        }
        
        
    }
    if (chk == 1)
    {
        printf("\nPrime");
    }
    else
    {
        printf("\nNot prime\n");
    }
}