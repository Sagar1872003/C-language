#include<stdio.h>
main(){
    //find the perimeter of circle
    int r;//radius
    float p;//perimeter
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    p=(2*3.1416)*r;
    printf("The Perimeter of the Circle is:%0.2f :",p);
}