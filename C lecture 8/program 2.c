#include<stdio.h>

main(){
	
	int u,t,s,a;

printf("Enter number of units used: ");
scanf("%d",&u);
if(u<=50){
  t=u*0.50;
}
else if(u<=150){
  t=25+((u-50)*0.75);
}
else if(u<=250){
  t=100+((u-150)*1.20);
}
else{
  t=220+((u-250)*1.50);
}
s=t*0.20;
a=t+s;
printf("Total amount of electricity bill: Rs. %d",a);
}
