#include<stdio.h>
void main()
{
    int n, m;
    int lines=3;
    for(n=1; n<=lines; n++)
    {
        for(m=1; m<=lines-n; m++)
        {
            printf(" ");
        }
        for(m=1; m<=2*n-1; m++)
        {   if(m==1 || m==2*n-1 || n==lines)
                printf("*");
            else
                printf(" ");    
        }
        printf("\n");
    }
}