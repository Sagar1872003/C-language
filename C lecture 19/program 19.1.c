#include<stdio.h>
main()
{
	int i , length = 0 , a = 0 ;
	char choice [100];
	
	printf(" Enter Your Choise :");
	scanf("%s", &choice);
	
	for( i = 0 ; choice[i] != NULL ; i++)
	{
		length++; 	
	}
	printf("the value of %d\n ", length);
	
	for( i = 0 ; choice[i] > length ; i++)
	{
		if( choice[i]==choice[length-i-1])
		{
			a=1;
		}
		else
		{
			a=0;
		}
	}
	
	if( a == 1)
	{
		printf("Given string is palindrome ");
	}
	else
	{
		printf("Given string is not palindrome ");
	}
}


