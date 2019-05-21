#include<stdio.h>
void main()
{
int a,remainder,reverse=0,temp;
scanf("%d",&a);
temp=a;
while(a!=0)
{
	remainder=a%10;
	reverse=(reverse*10)+remainder;
	a=a/10;
}
if(temp==reverse)
{
	printf("yes");
}
else
{
	printf("no");
}
}
