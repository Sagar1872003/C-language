#include<stdio.h>

void fibonacci(int num){
	
	int n1 = 0, n2 = 1, n3, i;
	

	for(i = 1;i <= num; i++){
		printf("%d ",n1);
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
}
	
}
void main(){
	int a;
	
	printf("Enter the number: ");
	scanf("%d",&a);
	
	fibonacci(a);
}
