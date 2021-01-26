#include<stdio.h>
int main()
{
    int i,j,l;
    for(i=5;i>=1;i--)
    {
        if(i<5)
        {
        for(l=1;l<=10-2*i;l++)
        {
            printf(" ");
        }
        }
      for(j=1;j<=i;j++)
      {
        printf("*");
    }
    printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        if(i<5)
        {
        for(l=1;l<=10-2*i;l++)
        {
            printf(" ");
        }
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


