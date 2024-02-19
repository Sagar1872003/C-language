#include<stdio.h>


void sum(int x, int y){
    printf("sum of %d and %d is %d \n\n",x,y,x+y);
}

void sub(int x, int y){
    printf("substrecktion of %d and %d is %d \n\n",x,y,x-y);
}

void mul(int x, int y){
    printf("multipltipliction of %d and %d is %d \n\n",x,y,x*y);
}

void div(int x, int y){
    printf("devition of %d and %d is %d \n\n",x,y,x/y);
}

void mod(int x, int y){
    printf("modeulo of %d and %d is %d \n\n",x,y,x%y);
}


void main(){
    int a,b,choice;
   
        printf("enter the value of a number :- \n\n");
        scanf("%d",&a);
       
        printf("enter the value of b number :- \n\n");
        scanf("%d",&b);
       
        do{
            printf("sarvalo karva mate 1 dabavo\n");
            printf("badbaki karva mate 2 dabavo\n");
            printf("gunakar karva mate 3 dabavo\n");
            printf("bhangakar karva mate 4 dabavo\n");
            printf("takavari kadhva mate 5 dabavo\n");
            printf("aa janjat mathi bar nikalva mate 0 dabavo\n");
            printf("enter your choice . . .");
            scanf("%d",&choice);
           
                switch(choice){
                   
                    case 1:
                        sum(a,b);
                    break;
                   
                    case 2:
                        sub(a,b);
                    break;
                   
                    case 3:
                        mul(a,b);
                    break;
                   
                    case 4:
                        div(a,b);
                    break;
                   
                    case 5:
                        mod(a,b);
                    break;
                       
                    case 0:
                        printf("you are exited . . .");
                    break;
                   
                    default:
                    printf("\n----------------------------------------------------\n");
                        printf("\n\nPLESE ENTER THE VALID NUMBER . . . \n\n");
                    break;
                }
        }while(choice!=0);
}

