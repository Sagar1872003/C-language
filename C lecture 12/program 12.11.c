//Q.11 Write a Program to print the below pattern using nested for loop.
//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *

#include<stdio.h>
main(){
	int i,j,k;
	
	for(i=1;i<=5;i++){
		for(k=4;k>=i;k--){
			printf("  ");
		}
		
		for(j=1;j<=i;j++){
			printf("* ",j);
		}
		for(j=i-1;j>=1;j--){
			printf("* ",j);
		}
		
		printf("\n");
	}
}
