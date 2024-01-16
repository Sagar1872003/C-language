#include<stdio.h>
main(){
    //assignment operator
    int a;
    printf("enter the A value:");
    scanf("%d",&a);
    printf("+= ans %d :\n",a+=2);
    printf("-= ans %d :\n",a-=2);
    printf("*= ans %d :\n",a*=2);
    printf("/= ans %d :\n",a/=2);
    printf(" %%= ans %f :\n",a%=2);


}
