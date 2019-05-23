#include <stdio.h>
void main()
{
int arr[50],size,i;
scanf("%d",&size);
for(i=0;i<size;i++)
{
	scanf("%d",&arr[i]);
}
	
for(i=1;i<size;i++)
	{
		if(arr[0]>arr[i])
		    arr[0]=arr[i];
	}
	printf("%d",arr[0]);
}
