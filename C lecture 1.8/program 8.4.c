#include<stdio.h>

main(){
	
	int i,n;
	
	printf("Enter value of starting value: ");
	scanf("%d",&i);
	printf("Enter value of ending value: ");
	scanf("%d",&n);

	while(i<=n){
		if(i%4==0){
				printf("%d\t",i);
		}
		
		i++;
	}
}

