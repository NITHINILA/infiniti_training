#include<stdio.h>
void main()
{
	int number;
	scanf("%d",&number);
	if(number>0)
	{
		printf("Given number is positive");
	}
	else if(number<0)
	{
		printf("Given number is negative");
	}
	else
	{
		printf("Given number is zero");
	}
}

