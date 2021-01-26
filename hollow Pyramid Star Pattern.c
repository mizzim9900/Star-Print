#include<stdio.h>
int main()
{
    int i,j,l;
    for(i=1;i<=5;i++)
    {
        for(l=1;l<=5-i;l++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(i<5)
            {
            if(j==1 || j==(2*i-1))
            printf("*");
            else
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }
}

