#include<stdio.h>
main()
{
	int *p,length;
	char str[20];
	
	printf("Enter any string :");
	gets(str);
	
	length = strlen(str);
	p = &length;
	
	printf("The length of a string : %d",*p);
}
