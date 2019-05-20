#include<stdio.h>
void main()
{
    int n,count;
    count=0;
    scanf("%d",&n);
    while(n!=0)
    {
       n=n/10;
       count++;
    }
    
    printf("%d",count);
}
  
