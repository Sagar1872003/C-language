#include<stdio.h>
main(){
    //find the simple intrest

    int p;
    float r;
    int t;

    printf("enter the principle: ");
    scanf("%d",&p);//principle of amount
    printf("enter the rate of principle: ");
    scanf("%f",&r);//rate per year
    printf("enter the number of years: ");
    scanf("%d",&t);//time in years
    printf("The Simple Interest is : %f",(p*r*t)/100);
}
