#include<stdio.h>

main(){
	
	int size, i;
	printf("enter your size :");
	scanf("%d",&size);
	
	int arr[size];
	
	for(i=0;i<size;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);	
	}
	for(i=0;i<size/2;i++){
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
	for(i=0;i<size;i++){
		printf("a[%d] = %d \n",i,arr[i]);
	}
}
