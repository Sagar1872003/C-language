#include<stdio.h>
main(){
	int i,a;
	
	printf("Enter array size : ");
	scanf("%d",&a);
	int arr[a],sum=0,multi=1,sub,div,mod;
	for(i=0;i<a;i++){
	
		printf("arr[%d] :",i);
		scanf("%d",&arr[i]);	
	}
	for(i=0;i<a;i++){	
		printf("%d\n",arr[i]);
		sum=sum+arr[i];
		multi=arr[i]*(multi);
	}
	sub=arr[0];
	for(i=1;i<a;i++){
		sub-=arr[i]; 
						
	}
	printf("\n Sum of All elements is : %d",sum);
	printf("\n Multiplication of All elements is : %d",multi);
	printf("\n Subtraction of All elements is : %d",sub);		
}
