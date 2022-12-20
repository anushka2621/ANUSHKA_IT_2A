#include <stdio.h>
void main()
{
    int n,i,j;
    char ch='A';
    printf("enter the number of lines");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
                {
                    printf("%c",(char)(i+64));

                }
                printf("\n");
    }
}
