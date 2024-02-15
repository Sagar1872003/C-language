#include<stdio.h>
main()
{
	int rows,cols,i,j;
	
	printf("Enter the array's row size : ");
	scanf("%d",&rows);
	
	printf("Enter the array's column size : ");
	scanf("%d",&cols);
	
	int arr[rows][cols];
	printf("Enter array's elements : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arr[%d][%d] =",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Original matrix is :\n");
	 for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
	 int transposed[cols][rows]; 
   		 for (j = 0; j < rows; j++) {
       	  for (i = 0; i < rows; i++) {
          	  transposed[j][i]=arr[i][j];
        }
    }

	printf("Transposed matrix is :\n");
	  for (j = 0; j < rows; j++)  {
        for (i = 0; i < cols; i++)  {
            printf("%d ", transposed[j][i]);
        }
        printf("\n");
    }
}

