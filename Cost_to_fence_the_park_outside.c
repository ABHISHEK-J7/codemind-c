#include<stdio.h>
int main()
{
    int i,b,w,c,tc,area;
    scanf("%d%d%d%d",&i,&b,&w,&c);
    area=((i+2*w)*(b+2*w)-(i*b));
    tc=c*area;
    printf("%d",tc);
}