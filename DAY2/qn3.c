#include<stdio.h>
int main()
{
    int arr[10],rev[10],i=0,n;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    while(i<n)
    {
        rev[n-i-1] = arr[i];
        i++;
    }
    printf("The reversed array : \n");

    for(i=0;i<n;i++)
    {
        if(rev[i] == 0)
        {
            printf("$\n");
        }
        else{
            printf("%d\n",rev[i]);
        }
        
    }

}