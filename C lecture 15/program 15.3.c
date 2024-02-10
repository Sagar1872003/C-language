#include<stdio.h>
main(){
	
	int rows,cols,i,j,sum=0;
	
	printf("Enter the value of Array's row :");
	scanf("%d",&rows);
	printf("Enter the value of Array's columns :");
	scanf("%d",&cols);
	
	int arrA[rows][cols];
	printf("\n");
	printf("Enter Array A's Elements : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arrA[%d][%d] : ",i,j);
			scanf("%d",&arrA[i][j]);
			if(i==j){
				sum+=arrA[i][j];
			}
		}
		
	}
	printf("\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",arrA[i][j]);
			
		}
		printf("\n");
		
	}
	printf("\n");
	
	printf("The Sum of diagonal elements of an Array : %d",sum);
	

}

