#include<stdio.h>
int main()
{
    int i,j,l;
    for(i=5;i>=1;i--)
    {
        for(l=1;l<=5-i;l++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
            printf("\n");
    }
}


