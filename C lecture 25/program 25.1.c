#include<stdio.h>
main()
{
	
	int i,n;
	
	printf("Enter size for an array :");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter array elements :\n");
	for(i=0 ; i < n ; i++){
		printf("a[%d] =",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i < n/2 ;i++){
		int rev = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = rev;
	}
	
	for(i=0;i<n;i++){
		printf("a[%d] = %d\n",n-1-i,arr[i]);
	}
}

