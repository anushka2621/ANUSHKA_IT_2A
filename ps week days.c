#include<stdio.h>
int main()
{
    int k,d,c,f,y,M,r,u,v,w;
    char m;
    printf("enter date");
    scanf("%d",&k);
    printf("enter month");
    scanf("%c",&m);
    printf("enter the year");
    scanf("%d",&y);
    if(m=='march')
    {
        M=1;
    }
    else if(m=='april')
    {
        M=2;
    }
    else if(m=='may')
    {
        M=3;
    }
    else if(m=='june')
    {
        M=4;
    }
    else if(m=='july')
    {
        M=5;
    }
    else if(m=='august')
    {
        M=6;
    }
    else if(m=='september')
    {
        M=7;
    }
    else if(m=='october')
    {
        M=8;
    }
    else if(m=='november')
    {
        M=9;
    }
    else if(m=='december')
    {
        M=10;
    }
    else if(m=='january')
    {
        M=11;
    }
    else if(m=='february')
    {
        M=12;
    }
    d=y%100;
    c=y/100;
    u=(13*M-1)/5;
    v=d/4;
    w=c/4;
    f=(k+u+v+w-2*c);
    r=f/7;
    if(r==0)
    {
        printf("sunday");
    }
    if(r==1)
    {
        printf("monday");
    }
    if(r==2)
    {
        printf("tuesday");
    }
    if(r==3)
    {
        printf("wednesday");
    }
    if(r==4)
    {
        printf("thursday");
    }
    if(r==5)
    {
        printf("friday");
    }
    if(r==6)
    {
        printf("saturday");
    }
}
