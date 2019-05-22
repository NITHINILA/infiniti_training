#include<stdio.h>
void main()
{
int n,temp,base,sum=0;
scanf("%d",&n);
temp=n;
while(n>0)
{
	base=n%10;
	sum=sum+(base*base*base);
	n=n/10;
}
if(temp==sum)
{
	printf("yes");
}
else
{
	printf("no");
}
}
