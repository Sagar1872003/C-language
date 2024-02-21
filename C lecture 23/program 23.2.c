#include<stdio.h>
void swap(int *a, int *b) {
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
int main()
{
	int x,y;

	
	printf("Enter the value of x:");
	scanf("%d",&x);

	printf("Enter the value of y:");
	scanf("%d",&y);
	
	printf("\nBefore swapping:\n"); 
	printf("x:%d\n",x); 
	printf("y:%d\n",y); 

	swap(&x, &y);

	printf("\nAfter swapping:\n"); 
	printf("x:%d\n",x);
	printf("y:%d\n",y);
}

