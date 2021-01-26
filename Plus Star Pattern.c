#include<stdio.h>
int main()
{
    int i,j,l;
    for(i=1;i<=9;i++)
    {
      for(j=1;j<=9;j++)
      {
          if(i!=5)
          {
              if(j==5)
                printf("+");
              else
                printf(" ");
          }
          else
        printf("+");
    }
    printf("\n");
    }
}

