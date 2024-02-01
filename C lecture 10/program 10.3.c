#include<stdio.h>

main(){
	
int First ,Last ,sum;

	printf("Enter your value : ");
	scanf("%d", &Last);

	First = Last % 10;
	
	while(Last >= 9){
		
		Last=Last / 10;
	}
	
	sum= First + Last;
	
	printf("Sum of First and Last digit = %d",sum);

}