#include<stdio.h>
int main()
{
    int i,j,n,column;
    scanf("%d",&n);
    if(n<3)
    {
        printf("The pattern is not possible");
    }
    else
    {
        column=1;
        for(i=1;i<n*2;i++)
        {
            for(j=1;j<=column;j++)
            {
                printf("*");
            }
            if(i<n)
            {
                column++;
            }
            else
            {
                column--;
            }
        printf("
");
       }
    }
    return 0;
}