//Write programme to find maximum and maximum in 4 number  
#include<stdio.h>
main(){
	int a,b,c,d;
	
	printf("Enter the number a: ");
	scanf("%d",&a);
	
	printf("Enter the number b: ");
	scanf("%d",&b);
	
	printf("Enter the number c: ");
	scanf("%d",&c);
	
	printf("Enter the number d: ");
	scanf("%d",&d);
	
	//max number
	
	if(a>b){
		if(a>c){
		if(a>d){
			printf("\na is max");
		}else{
			printf("\nd is max");
		}	
		}else{
			printf("\nc is max");
		}
	}else{
		if(b>c){
			if(b>d){
					printf("\nb is max");
			}else{
					printf("\nd is max");
			}
		}else{
			if(c>d){
					printf("\nc is max");
			}
			else{
					printf("\nd is max");
			}
		}
	}
	
	//minimum number
	
	if(a<b){
		if(a<c){
		if(a<d){
			printf("\na is minimum number");
		}else{
			printf("\nd is minimum number");
		}	
		}else{
			printf("\nc is minimum number");
		}
	}else{
		if(b<c){
			if(b<d){
					printf("\nb is minimum number");
			}else{
					printf("\nd is minimum number");
			}
		}else{
			if(c<d){
					printf("\nc is minimum number");
			}
			else{
					printf("\nd is minimum number");
			}
		}
	}
	
}
