#include <stdio.h>

int main() {
   
    int n1, n2, digits;

    printf("Enter any number: ");
    scanf("%d", &n1);

    n2 = n1;
    digits = 0;

    while (n2 != 0) {
        n2 = n2 / 10;
        digits++;
    }

    printf("Total number of digits: %d\n", digits);

}
