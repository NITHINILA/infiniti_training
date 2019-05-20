#include<stdio.h>
void main()
{
    int n,count;
    count=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
      
       n=n/10;
       ++count;
    }
        printf("%d",count);
        
}
    
