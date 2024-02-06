#include<stdio.h>

main()
{
	int i;
	
	printf("Alphabets from a - z are: \n");
	
	for (i=97; i<=122; i+=4){
		printf("%c  " ,i);
	}
}
