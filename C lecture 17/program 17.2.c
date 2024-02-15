#include<stdio.h>
main()
{
	int i;
	char name[20];
	
	printf("Enter any string : ");
	scanf("%[^\n]s",&name);
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' '){
			name[i]='_';
		}
	}
	printf("Lowercase string : %s",strlwr(name));	

}
