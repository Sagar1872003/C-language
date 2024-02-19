#include <stdio.h>
main(){
	
	int i,len;
	char string[50],freq[128] = {0}; 
	
	printf("Enter any string: ");
    gets(string);
    
    len = strlen(string);
  
    for (i = 0; i < len; i++)
	{
        freq[string[i]]++;
    }

    printf("Frequency of each letter:\n");
    for ( i = 0; i < 128; i++) 
	{
        if (freq[i] > 0) {
            printf("%c => %d\n", i, freq[i]);
        }
    }

}