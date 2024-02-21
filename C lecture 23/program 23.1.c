#include<stdio.h>
main()
{
	int i,size,*p;
	
	printf("enter the array's size :");
	scanf("%d",&size);

	int arr[size];
	p = &arr;
	
	
	printf("\n\nEnter array's elements: \n");
	for(i=0;i<size;i++){
		printf("a[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\nAddress & values of all arrays:\n");
	for(i=0;i<size;i++){
        printf("%u => %d \n",p+i,*(p+i));
	}
	
	printf("\n\nSquares of all elements:\n");
	
	for(i=0;i<size;i++){
		printf("%d = %d\n",*(p+i),(*(p+i)) * (*(p+i)));
	}
}
