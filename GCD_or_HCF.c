#include<stdio.h>
int main()
{
    int i,a,b,h;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        {
            h=i;
        }
    }
    printf("%d",h);
    return 0;
}