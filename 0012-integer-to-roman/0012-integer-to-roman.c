#include <stdio.h>
#include <string.h>

char* intToRoman(int num) {

    // Roman values
    int values[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4,
        1
    };

    // Roman symbols
    char *symbols[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV",
        "I"
    };

    // Allocate memory for answer
    char *result = (char*)malloc(20 * sizeof(char));

    result[0] = '\0';

    int i = 0;

    while(num > 0) {

        // Keep using same symbol while possible
        while(num >= values[i]) {

            strcat(result, symbols[i]);

            num = num - values[i];
        }

        i++;
    }

    return result;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna