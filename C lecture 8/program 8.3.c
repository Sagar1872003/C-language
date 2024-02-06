#include<stdio.h>

main(){
	
	int i,n=1;
	
	printf("Enter value of starting value: ");
	scanf("%d",&i);

	while(i>=n){
		if(i%2!=0){
		printf("%d\n",i);	
		}
		i--;
	}
}

