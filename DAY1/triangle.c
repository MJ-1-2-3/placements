#include<stdio.h>
int main()
{
    int side[3],chk=0;
    printf("Enter the length of  all the sides: ");
    scanf("%d%d%d",&side[0],&side[1],&side[2]);

    for(int i=0;i<3; i++)
    {
        if(side[i]+side[(i+1)%3] < side[(i+2) % 3])
        {
            chk = 1;
        }

    }
    if (chk == 0)
    {
        printf("Valid triangle\n");
    }
    else{
        printf("Invalid");
    }
}