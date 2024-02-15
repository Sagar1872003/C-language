#include<stdio.h>
main()
{
	int i,sum=0;
	char name[20];
	
	printf("Enter your name : ");
	scanf("%s",&name);
	
	
	for(i=0;name[i]!='\0';i++){
		printf("Ascii value of %c is %d\n",name[i],name[i]);
		sum=sum+name[i];
	}
	printf("Sum of Ascii values is : %d",sum);
}

