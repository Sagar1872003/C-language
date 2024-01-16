// casculater the variable


#include <stdio.h>

void main(){
    int x, y;
    
    x=5;
    y=3;
    
    //sum of the two variable
    printf("Sum of %d + %d = %d",x,y,x+y);

   // multiplication of two variable
   printf("\nMultiplication of %d * %d = %d",x,y,x*y);

   //division of two variables
   printf("\nDivision of  %d / %d = %.2f",x,y,(float)x/y);

   //substraction of two variables
   printf("\nSubtraction of %d - %d = %d\n",x,y,x-y);

   //modulo of two variables
   printf("Modulo of %d %% %d = %d",x,y,x%y);
}
