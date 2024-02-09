#include <stdio.h>
main() {
    int s,i;
    printf("Enter size of Array : ");
    scanf("%d", &s);

    int arr[s];
    
    printf("Enter Array elements :\n");
    for (i = 0; i < s; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("The Squares number are: ");
    for (i = 0; i < s; i++) {
        printf("%d ", arr[i] * arr[i]);
    }
    printf("\n");


}
