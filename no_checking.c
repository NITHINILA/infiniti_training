#include<stdio.h>
void main()
{
	int number;
	scanf("%d",&number);
	if(number>0)
	{
		printf("Positive");
	}
	else if(number<0)
	{
		printf("Negative");
	}
	else
	{
		printf("Zero");
	}
}

