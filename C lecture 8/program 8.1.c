#include <stdio.h>
main(){
	int i,n,sum;
	
	printf("enter your starting number :");
	scanf("%d",&i);
	printf("enter your ending number :");
	scanf("%d",&n);
	
	while(i<=n){
		printf("%d\n",i);
		sum = sum+i;
		i++;
	}
	printf("\n the ans is %d",sum);
}
