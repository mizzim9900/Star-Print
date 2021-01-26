#include<stdio.h>
int main()
{
    int i,l,j;
    for(i=0;i<3;i++)
    {
        for(l=1;l<=19;l++)
        {
            if(l<=2-i || (l>=i+7 && l<=13-i) || l>=18+i)
            {
             printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }
      for(i=10;i>=1;i--)
    {
        for(l=1;l<=10-i;l++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

