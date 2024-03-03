#include<stdio.h>
int main()
{
	int a[10],i,find,c=0;
	
	printf(" Enter number in Array :");
	for(i=0; i<=4; i++)
		scanf("%d",&a[i]);
	
	printf(" enter maximun number to find in array :");
	scanf("%d",&find);
	
	for(i=0; i<=4; i++)
	{
		if(a[i]==find)
			c=c+1;
	}
	
	if(c>0)
		printf(" Found ");
	else
		printf(" not Found ");
		printf("thank you");
		
	return(0);	
}
