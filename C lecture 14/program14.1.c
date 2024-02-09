#include <stdio.h>
main() {
    int a, b, c, i, j;

    printf("Enter array a size : ");
    scanf("%d", &a);

    int arra[a];

    printf("Enter array a elements :\n");
    for (i = 0; i < a; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arra[i]);
    }

    printf("Enter array b size : ");
    scanf("%d", &b);

    int arrb[b];

    printf("Enter array b elements :\n");
    for (i = 0; i < b; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &arrb[i]);
    }

    c = a+b;
    int arrc[c];

    for (i = 0; i < a; i++) {
        arrc[i] = arra[i];
    }

    for (j = 0; j < b; j++) {
        arrc[a + j] = arrb[j];
    }
    printf("array c is: ");
    for (i = 0; i < c; i++) {
        printf("%d", arrc[i]);
            printf(" ,");        
    }
    printf("\n");

}
