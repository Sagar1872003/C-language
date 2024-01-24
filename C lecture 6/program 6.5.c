#include<stdio.h>
main(){
	//input variables
	int Choice , yourchoice;
	
	printf("Press 1 for panipuri\n");
	printf("Press 2 for sevpuri\n");
	printf("Press 3 for dahipuri\n");
	printf("Enter your choice:");
	scanf("%d",&Choice);
	
	switch (Choice){
        case 1:
            printf("Press 1 for plain panipuri\n");
            printf("Press 2 for cheese panipuri\n");
            printf("Press 3 for sing masala panipuri\n");
            printf("Enter your choice:");
            scanf("%d",&yourchoice);
            
            printf("Your order are successfully done");
            break;
            
        case 2:
            printf("plain sevpuri khane ke liye 1 dabaiye\n");
            printf("cheese sevpuri khane ke liye 2 dabaiye\n");
            printf("sing masalan sevpuri khane ke liye 3 dabaiye\n");
            printf("Enter your choice:");
            scanf("%d",&yourchoice);
            
            printf("aapka order pohach chuka he");
            break;
        case 3:
            printf("sadi dahipuri khava mate 1 dabavo\n");
            printf("cheese vali dahipuri khava mate 2 dabavo\n");
            printf("sing masala vali dahipuri khava mate 3 dabavo\n");
            printf("Enter your choice:");
            scanf("%d",&yourchoice);
            
            printf("tamaro order pohchi chukiyto chhe kripa kari tame tamara khicha khali karo");
            break;
        default:
            printf("Enter Valid Number");
    }
}
