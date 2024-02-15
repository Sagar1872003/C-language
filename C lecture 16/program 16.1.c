#include<stdio.h>
main()
{
	int size,i;
	
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	
	int A[i];
	for(i=0;i<size;i++){
		printf("Enter elements of an array : \n");
		scanf("%d",&A[i]);
	}
	
	printf("Negative elements from an Array are :");
	
	for(i=0;i<size;i++){
		if(A[i]<0){
				printf("%d,",A[i]);
		}
	}
}
