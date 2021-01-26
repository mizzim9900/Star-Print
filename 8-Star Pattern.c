#include<stdio.h>
int main()
{
    int i,l;
    for(i=1;i<=9;i++)
    {
        for(l=1;l<=7;l++)
        {
            if((i>1 && i<5) || (i<9 && i>5))
            {
                if(l==3 || l==7)
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
             if(l>3 && l<7)
                printf("*");
             else
                printf(" ");
        }
    }
    printf("\n");
}
}
