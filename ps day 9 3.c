#include<stdio.h>
int main()
{
    unsigned long long i,t;
    scanf("%llu",&t);
    for(i=0;i<t;i++)
    {
        unsigned long long j,n,d,prod=1;
        scanf("%llu",&n);
        printf("%llu\n",n*(n-1)/2);
    }
    return 0;
}
