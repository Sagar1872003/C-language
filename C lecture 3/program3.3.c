#include<stdio.h>
main(){
    //area of triangle
    int base, height;
    
    printf("Enter the length of the base: ");
    scanf("%d", &base);
    printf("\nEnter the height of the triangle: ");
    scanf("%d", &height);
    float area = 0.5 * base * height;
	printf("\nThe area of the triangle is %.2f", area);
}
