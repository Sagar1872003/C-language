#include<stdio.h>
main(){
	
	int rows,cols,i,j;
	
	printf("Enter the value of Array's row :");
	scanf("%d",&rows);
	printf("Enter the value of Array's columns :");
	scanf("%d",&cols);
	printf("\n");
	
	int arrA[rows][cols], arrB[rows][cols], arrC[rows][cols];
	printf("Enter Array A value :\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arrA[%d][%d] : ",i,j);
			scanf("%d",&arrA[i][j]);
		}		
	}
	printf("\n");
	printf("Enter Array B's value : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arrB[%d][%d] : ",i,j);
			scanf("%d",&arrB[i][j]);
		}		
	}
	printf("\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
		arrC[i][j]=arrA[i][j]+arrB[i][j];
		}		
	}
	printf("Array c is : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
		printf("%d ",arrC[i][j]);
		}
		printf("\n");		
	}


}
