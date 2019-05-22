#include<stdio.h>
void main()
{
int n1,n2,temp,i,base,sum;
scanf("%d %d",&n1,&n2);
for(i=n1+1;i<n2;i++)
{
	temp=i;
	sum=0;
	while(temp!=0)
	{
		base=temp%10;
		sum=sum+(base*base*base);
		temp=temp/10;
	}
	if(i==sum)
	{
		printf("%d ", i);
	}
}
}
