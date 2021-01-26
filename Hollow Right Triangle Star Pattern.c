#include<stdio.h>
int main()
{
    int i,j,l;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i<10)
            {
                if(j==1 || j==i)
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
