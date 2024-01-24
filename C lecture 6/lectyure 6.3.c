#include<stdio.h>

main(){
	int a,b,c,d;
	
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	printf("enter the first number :");
	scanf("%d",&c);
	printf("enter the second number :");
	scanf("%d",&d);
	
	// max number
	(a>b)?((a>c)?((a>d)?printf("a is max"):printf("d is max")):printf("c is max")):(b>c)?(b>d)?printf("b is max"):printf("d is max"):printf("c is max");
	//min number
	(a<b)?((a<c)?((a<d)?printf("\n a is min"):printf("\n d is min")):printf("\n c is min")):(b<c)?(b<d)?printf("\n b is min"):printf("\n d is min"):printf("\n c is min");
}
