#include<stdio.h>
main(){
	
	int rows,cols,i,j;
	float sum=0;
	
	printf("Enter the value of Array's row :");
	scanf("%d",&rows);
	printf("Enter the value of Array's columns :");
	scanf("%d",&cols);
	
	int arrA[rows][cols];
	printf("Enter array A's Elements : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arrA[%d][%d] : ",i,j);
			scanf("%d",&arrA[i][j]);
			sum+=arrA[i][j];
		}	
	}
	float ave=sum/(rows*cols);
	
	printf("\nAverage of the Array is : %.2f",ave);


}

