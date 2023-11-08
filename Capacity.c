#include<stdio.h>
int main()
{
    int t,s,b,res;
    scanf("%d",&t);
    scanf("%d",&s);
    scanf("%d",&b);
    res = (2*t*s*b*512)/1024;
    printf("%d KB",res);
}