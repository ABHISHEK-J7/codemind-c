#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int l=strlen(str);
    int s=0;
    for(int i=0;i<l;i++)
    {
        if(str[i]=='I')
        {
            s+=1;
        }
        else if(str[i]=='V')
        {
            if(str[i-1]=='I')
            {
                s+=3;
            }
            else
            {
                s+=5;
            }
        }
        else if(str[i]=='X')
        {
            if(str[i-1]=='I')
            {
                s+=8;
            }
            else
            {
                s+=10;
            }
        }
        else if(str[i]=='L')
        {
            if(str[i-1]=='X')
            {
                s+=30;
            }
            else
            {
                s+=50;
            }
        }
        else if(str[i]=='C')
        {
            if(str[i-1]=='X')
            {
                s+=80;
            }
            else
            {
                s+=100;
            }
        }
        else if(str[i]=='D')
        {
            if(str[i-1]=='C')
            {
                s+=300;
            }
            else if(str[i]=='X')
            {
                s+=480;
            }
            else
            {
                s+=500;
            }
        }
        else if(str[i]=='M')
        {
            if(str[i-1]=='C')
            {
                s+=800;
            }
            else if(str[i-1]=='X')
            {
                s+=980;
            }
            else
            {
                s+=1000;
            }
        }
    }
    printf("%d",s);
}