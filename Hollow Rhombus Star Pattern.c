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
        for(j=1;j<=5;j++)
        {
            if(i<=4 && i>=2)
            {
                if(j==1 || j==5)
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
