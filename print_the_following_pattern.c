#include<stdio.h>
    int main()
    {
        int i,j,k,l,n;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=n;j>i;j--)
            {
                printf(" ");
            }

            for(k=i-1;k>=0;k--)
            {
                printf("%d",k);
            }

            for(l=1;l<i;l++)
                printf("%d",l);
            printf("
");
        }
        return 0;
    }