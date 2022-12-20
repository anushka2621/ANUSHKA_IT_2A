#include<stdio.h>
void main()
{
    int i,j,k;
    char ch='A';
    for (i=1;i<=5;i++)
    {  k=i;
        for (j=1;j<=i;j++)
        {
            printf("%c",(char)(k+64));
            k++;
        }
        ch='A';k++;
        printf("\n");

    }
}
