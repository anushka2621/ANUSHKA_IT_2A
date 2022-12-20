#include<stdio.h>
void main()
{
    int i,j,element;
    for (i=1;i<=4;i++){
        for (j=1;j<=4-i;j++)
           {
                printf(" ");
           }
        for (j=i;j<2*i;j++)
        {
            printf("%d",j);
        }
        element=2*(i-1);
        for(j=1;j<=i-1;j++)
        {
            printf("%d",element--);
        }
        printf("\n");
    }
}
