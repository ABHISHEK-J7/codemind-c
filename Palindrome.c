#include <stdio.h>
int main() 
{
    int n,x,rev=0,r;
    scanf("%d", &n);    
    x=n;
    while (n > 0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    
    if (x==rev)
    {
        printf("True"); 
    }
    else
    {
        printf("False"); 
    }
}