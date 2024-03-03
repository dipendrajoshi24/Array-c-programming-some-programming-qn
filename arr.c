#include<stdio.h>
void main()
{
	int a[10],i;
	printf("Enter array elements");
	for(i=0; i<=4; i++)
		scanf("%d",&a[i]);
	
	printf("\n Elements are :\n ");
	for(i=0; i<=4; i++)
		printf(" %d",a[i]);
}
