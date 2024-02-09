#include<stdio.h>
main(){
	int i,a;
	float ave;
	
	printf("Enter array size : ");
	scanf("%d",&a);
	float arr[a],sum=0;
	for(i=0;i<a;i++){
	
		printf("arr[%d] : ",i);
		scanf("%f",&arr[i]);	
	}
	for(i=0;i<a;i++){
		printf("%f\n",arr[i]);
		sum=sum+arr[i];
	}
	ave=sum/a;
	printf("Average of an array is : %.1f",ave);

}
