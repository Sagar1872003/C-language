#include<stdio.h>

int len(){
	int i,length;
	char str[20];
	
		printf("Enter any string :");
		gets(str);
	
	    length= strlen(str);
	    
		printf("length of the string = %d ",length);
}

int main(){
	
	len();
}
