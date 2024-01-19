#include<stdio.h>

// Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
main(){
    int bs,hra,da,ta;
    printf("enter your base salary:-");
    scanf("%d",&bs);
    printf("enter the hra :-");
    scanf("%d",&hra);
    printf("enter the da:-");
    scanf("%d",&da);
    printf("enter the ta:-");
    scanf("%d",&ta);

    bs=bs+(bs*hra/100)+(bs*da/100)+(bs*ta/100);

    printf("the base salary is:- %d",bs);
}