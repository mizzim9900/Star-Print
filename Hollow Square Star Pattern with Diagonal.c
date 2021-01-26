#include<stdio.h>
int main()
{
    int i,j,l;
    for(i=1;i<=5;i++)
    {
        for(l=1;l<=5;l++)
        {
            if(i==1 || i==5)
            {
                printf("*");
            }
          if(i%2==0)
          {
              if(l%2==1 && (l>1 && l<5))
            printf(" ");
            else
                printf("*");
        }

        if(i%2==1 && (i>1 && i<5))
        {
            if(l%2==0 && (l>1 && l<5))
                printf(" ");
                else
                    printf("*");
        }
    }
        printf("\n");
    }
}
