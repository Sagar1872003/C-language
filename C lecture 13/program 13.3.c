#include<stdio.h>
main(){
	
	int i,n;
	
	printf("Enter size of an array : ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(i=0;i<n;i++){
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
		for(i=0;i<n;i++){
		printf("b[%d] :",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=a[i]+b[i];
	}
	printf("\n");
	printf("Array c is :\n");
	for(i=0;i<n;i++){
		printf("c[%d] : %d\n",i,c[i]);
		
	}
}
