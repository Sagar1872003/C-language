#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of input string

int main() {
    char str[MAX_SIZE];
    int freq[256] = {0}; // Array to store frequency of characters, assuming ASCII characters

    // Input string from the user
    printf("Enter any string: ");
    fgets(str, MAX_SIZE, stdin);

    // Traverse the string and count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i]]++; // Increment frequency of lowercase letters
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            freq[str[i] - 'A' + 'a']++; // Convert uppercase letters to lowercase and increment frequency
        }
    }

    // Print frequency of each letter
    printf("Frequency of each letter:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0 && (i >= 'a' && i <= 'z')) {
            printf("%c => %d\n", i, freq[i]);
        }
    }

    return 0;
}

