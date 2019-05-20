#include<stdio.h>
void main()
{
	int number;
	scanf("%d",&number);
	if(number>0)
	{
		printf("positive");
	}
	else if(number<0)
	{
		printf("negative");
	}
	else
	{
		printf("zero");
	}
}

