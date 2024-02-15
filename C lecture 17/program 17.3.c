#include<stdio.h>
main()
{
	int i;
	char name[20];
	
	printf("Enter any string : ");
	scanf("%[^\n]s",&name);
	
 	for (i = 0; name[i] != '\0'; i++) {
        if (name[i] >= 'A' && name[i] <= 'Z') {
            name[i] += 32;
        } else if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] -= 32; 
        } else if (name[i] == ' ') {
            name[i] = '_'; 
        }
    }
	printf("Togglecase string : %s",name);	

}

