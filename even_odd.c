#include<stdio.h>
void main()
{
	int num;
	scanf("%d",&num);
	if(num<0)
	{
		printf("invalid");
	}
	else if(num%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}






