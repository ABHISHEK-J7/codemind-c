#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = n;i >= 1;i--)
    {
        for(int j = n;j >= 1;j--)
        {
            if(i == j || i+j == n+1)
            {
                printf("%d ",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
    return 0;
    }