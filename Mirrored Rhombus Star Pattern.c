#include<stdio.h>
int main()
{
    int i,j,l;
    for(i=1;i<=5;i++)
    {
        for(l=1;l<=i-1;l++)
        {
            printf(" ");
        }
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

