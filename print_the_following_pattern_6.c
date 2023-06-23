#include <stdio.h>
int main()
{
    int r,c,n;
    scanf("%d",&n);
    for(r=n; r>=1; r--)
    {
        for(c=n; c>=1; c--)
        {
            printf("%d ",c);
        }
        printf("
");
    }
    return 0;
}