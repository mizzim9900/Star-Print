#include<stdio.h>
int main()
{
    int i,j,l;
    for(i=5;i>=1;i--)
    {
      for(j=1;j<=10;j++)
      {
          if(i<5)
          {
          if(j>=i+1 && j<=10-i)
        printf(" ");
        else
            printf("*");
          }
          else
            printf("*");
    }
    printf("\n");
    }
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=10;j++)
        {
         if(i>1)
        {
        if(j<=4+i && j>=7-i)
            printf(" ");
        else
            printf("*");
            }
            else
            printf("*");
        }
        printf("\n");
    }
}

