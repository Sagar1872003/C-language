#include<stdio.h>

int sum(){
	int i,size,sum=0;
	
		printf("Enter the size of an array :");
		scanf("%d",&size);
	
	int arr[20];
	for(i=0;i<size;i++)
	{
		printf("Enter the elements of an array %d:",i);
		scanf("%d",&arr[i]);
    }

	for(i=0;i<size;i++)
	{
		sum += arr[i];
    }
    
    printf("\nSum of the array elements : %d",sum);
	
}

int main(){
	
	sum();
}
