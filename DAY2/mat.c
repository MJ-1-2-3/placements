#include<stdio.h>
int main()
{
    int r,c,mat[10][10],i,j;
    printf("Enter the number of rows and columns : \n");
    scanf("%d%d",&r,&c);
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element a[%d][%d]\n",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The matrix you have entered is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("  %d",mat[i][j]);
        }
        printf("\n");
    }


    printf("The diagonal elements are : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                printf("%d\t",mat[i][j]);
            }
        }
    }

    printf("\nThe non-diagonal elements are : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=j)
            {
                printf("%d\t",mat[i][j]);
            }
        }
    }

    printf("\nThe upper diagonal is : \n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<j)
            {
                printf("%d\t",mat[i][j]);
            }
        }
    }

     printf("\nThe lower diagonal is : \n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j)
            {
                printf("%d\t",mat[i][j]);
            }
        }
    }


    
}
