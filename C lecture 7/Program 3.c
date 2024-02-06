#include<stdio.h>

main(){
	int a;
	printf("Enter the students marks: ");
	scanf("%d",&a);
	
	if(a<=32){
		printf("You are fail. ");
	}
	else if(a<=39&&a>=33){
		printf("You get D grade");
	}
	else if(a<=60&&a>=40){
		printf("You get c grade");
	}
	else if(a<=80&&a>=60){
		printf("You get B grade");
	}
	else if(a<=100&&a>=80){
		printf("You get A grade");
	}
}
