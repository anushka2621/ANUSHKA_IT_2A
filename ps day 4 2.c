#include<stdio.h>
double arr[100];
int n;
int readarr(void)
{
printf("Enter Array Elements n");
int i;
for(i=0;i<n;i++)
{
scanf("%lf",&arr[i]);
}
}
int findmean(void)
{
double sum=0,mean;
int j;
for(j=0;j<n;j++)
{
sum+=arr[j];
}
mean=sum/n;
printf("nMean=%lfn",mean);
}
void median(void)
{
double res;
double a,b;
a=arr[n/2];
b=arr[n/2-1];
if(n%2==0)
{
res=(a+b)/2;
}
else
res=arr[n/2];
printf("nThe Median is %lfn",res);
}
