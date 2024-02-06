#include<stdio.h>

main(){
	
	int choice;

	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
		printf("Sunday");
		break;
		
		case 2:
		printf("Monday");
		break;
			case 3:
		printf("Tuesday");
		break;
			case 4:
		printf("Wednesday");
		break;
			case 5:
		printf("Thurseday");
		break;
			case 6:
		printf("Friday");
		break;
			case 7:
		printf("Saturday");
		break;
	}
}
