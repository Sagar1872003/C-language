#include<stdio.h>

void decimal(int num){

	if(num % 3 == 0 && num % 5 == 0){
		printf("Your given number is Decimal with 3 and 5.");
		
	}
	else{
		printf("Your given number is not Decimal with 3 and 5.");
	}
	
}
void main(){
	int a;
	
	printf("Enter the number: ");
	scanf("%d",&a);
	decimal(a);
}
