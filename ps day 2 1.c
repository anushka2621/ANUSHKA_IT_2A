#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=4;i++)
    {
        for (j=i;j<=i*2-1;j++)
         {
            printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}
