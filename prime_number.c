#include<stdio.h>  
int main()
{    
   int n,i,m=0,x=0;   
   scanf("%d",&n);    
   m=n/2;    
   for(i=2;i<=m;i++)    
   {    
       if(n%i==0)    
       {    
           printf("not a prime");    
           x=1;    
           break;    
       }    
       
   }    
   if(x==0)    
   printf("prime");     
 }