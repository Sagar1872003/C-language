#include<stdio.h>
main(){
	int n1=0 ,n2=1 ,n3,n,i;
	printf("enter the point:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d ",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
}
