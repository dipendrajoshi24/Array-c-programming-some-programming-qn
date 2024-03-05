#include<stdio.h>
int main(){
	int i;
	int size,max,min,find;
	
	printf("Enter the size of the array:\n");
	scanf("%d",&size);
	int a[4];
	
	printf("Enter the elements of the array:\n");
	for(i=0; i<4; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<4; i++){
		if(a[4]>max){
			max=a[4];
			
		}
		if(a[i]<min){
			min=a[i];
			
		}
	}
	printf("maximum number in the array:%d\n", max);
	printf("minimum number in the array:%d\n", min);
	return 0;
}
