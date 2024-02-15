#include<stdio.h>
main()
{
	int rows,cols,i,j;
	
	printf("Enter the array's row size : ");
	scanf("%d",&rows);
	
	printf("Enter the array's column size : ");
	scanf("%d",&cols);
	
	int arr[rows][cols];
	printf("\nEnter array's elements : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("arr[%d][%d] =",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	 
//    for (i = 0; i < rows; i++) {
//      int row_sum=0;
//        for (j = 0; j < cols; j++) {
//            row_sum += arr[i][j];
//        }
//        printf("\nSum of elements in row %d: %d\n", i, row_sum);
//    }
//       for (j = 0; j < cols; j++) {
//       int col_sum=0;
//        for (i = 0; i < rows; i++) {
//            col_sum += arr[i][j];
//        }
//        printf("\nSum of elements in col %d: %d\n", j, col_sum);
//    }

	int choice;
    printf("\nEnter 1 to find sum of a row, 2 to find sum of a column: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int row_num;
        printf("\nEnter row number: ");
        scanf("%d", &row_num);
        if (row_num >= 0 && row_num < rows) {
            int row_sum = 0;
            printf("Elements of row %d: ", row_num);
            for (j = 0; j < cols; j++) {
                printf("%d ", arr[row_num][j]);
                row_sum += arr[row_num][j];
            }
            printf("\nThe sum of row %d: %d\n", row_num, row_sum);
        } else {
            printf("Invalid row number!\n");
        }
    } else if (choice == 2) {
        int col_num;
        printf("\nEnter column number: ");
        scanf("%d", &col_num);
        if (col_num >= 0 && col_num < cols) {
            int col_sum = 0;
            printf("Elements of column %d: ", col_num);
            for (i = 0; i < rows; i++) {
                printf("%d ", arr[i][col_num]);
                col_sum += arr[i][col_num];
            }
            printf("\nThe sum of column %d: %d\n", col_num, col_sum);
        } else {
            printf("Invalid column number!\n");
        }
    } else {
        printf("Invalid choice!\n");
    }
}

