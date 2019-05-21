#include<stdio.h>
void main()
{
int n,k,ans=1;
scanf("%d %d",&n,&k);
for(int i=1;i<=k;i++)
{
	ans=ans*n;
}
printf("%d",ans);
}
