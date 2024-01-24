#include<stdio.h>

main(){
	int a,b,c,d,e;
	
	printf("enter the a number :");
	scanf("%d",&a);
	printf("enter the b number :");
	scanf("%d",&b);
	printf("enter the c number :");
	scanf("%d",&c);
	printf("enter the d number :");
	scanf("%d",&d);
	printf("enter the e number :");
	scanf("%d",&e);
	
	//max number
	(a>b)
		?((a>c)
			?((a>d)
				?((a>e)?printf("a is max"):printf("e is max"))
				:((d>e)?printf("d is max"):printf("e is max")))
			
			:((c>d)
				?((c>e)?printf("c is max"):printf("e is max"))
				:((d>e)?printf("d is max"):printf("e is max"))))
		:((b>c)
			?((b>d)
				?((b>e)?printf("b is max"): printf("e is max"))
				:((d>e)?printf("d is max"): printf("e is max")))
			:((c>d)
				?((c>e)?printf("c is max"):printf("e is max"))
				:((d>e)?printf("d is max"):printf("e is max"))));
	//min number
	(a<b)
		?((a<c)
			?((a<d)
				?((a<e)?printf("\n a is min"):printf("\n e is min"))
				:((d<e)?printf("\n d is min"):printf("\n e is min")))
			
			:((c<d)
				?((c<e)?printf("\n c is min"):printf("\n e is min"))
				:((d<e)?printf("\n d is min"):printf("\n e is min"))))
		:((b<c)
			?((b<d)
				?((b<e)?printf("\n b is min"): printf("\n e is min"))
				:((d<e)?printf("\n d is min"): printf("\n e is min")))
			:((c<d)
				?((c<e)?printf("\n c is min"):printf("\n e is min"))
				:((d<e)?printf("\n d is min"):printf("\n e is min"))));
}
