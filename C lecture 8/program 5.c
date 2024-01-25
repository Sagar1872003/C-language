#include<stdio.h>

main(){
	int choice;
	
	printf("Enter your choice:");
	scanf("%d",&choice);;
	
	switch(choice){
		case 1:
			printf("It's January");
		break;
		
		case 2:
			printf("It's February");
		break;
		case 3:
			printf("It's March");
		break;
		case 4:
			printf("It's April");
		break;
		case 5:
			printf("It's May");
		break;
		case 6:
			printf("It's June");
		break;
		case 7:
			printf("It's July");
		break;
		case 8:
			printf("It's August");
		break;
		case 9:
			printf("It's September");
		break;
		case 10:
			printf("It's October");
		break;
		case 11:
			printf("It's November");
		break;
		case 12:
			printf("It's December");
		break;
		default:
			printf("\nEnter Number from 1 to 12....");
			
	}
}
