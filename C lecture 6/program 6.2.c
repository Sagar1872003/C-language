#include<stdio.h>

main(){
	int a,b,c;
	
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	printf("enter the third number :");
	scanf("%d",&c);
	//max number
	(a>b)?((a>c)?printf("a is max"):printf("c is max")):((b>c)?printf("b is max"): printf("c is max"));
	//min number
	(a<b)?((a<c)?printf("\n a is min"):printf("\n c is min")):((b<c)?printf("\n b is min"): printf("\n c is min"));
}
