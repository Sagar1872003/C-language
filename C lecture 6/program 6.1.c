#include<stdio.h>

main(){
	int a,b;
	
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number number :");
	scanf("%d",&b);
	//max number
	(a>b)?printf("a is max"):printf("b is max");
	//min number
	(a<b)?printf("\n a is min"):printf("\n b is min");

}
