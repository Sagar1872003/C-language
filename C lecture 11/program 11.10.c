#include<stdio.h>
main() {
    int i, j, k = 1;
    char r = 'A';

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (j % 2 == 0) {
                printf("%c   ", r++);
            } else {
                printf("%d   ", k++);
            }
        }
        printf("\n");
    }
}
 
