#include<stdio.h>
void cube()
{
	int i,j,a;
	
	printf("Enter size for an array :");
	scanf("%d",&a);
	
	int arr[a][a];

	printf("Enter array elements :\n");
	for(i=0; i<a; i++){
		for(j=0; j<a; j++){
		printf("a[%d][%d] :",i,j);
		scanf("%d",&arr[i][j]);
	  }
	}

	int (*p)[a]=arr;
	int cube;
		
	for(i=0; i<a; i++){
		for(j=0; j<a; j++){
		cube = (p[i][j] * p[i][j] * p[i][j]);
		printf("%d  ",cube);
		}
		printf("\n");
	}
}

void main()
{
	cube();
}

