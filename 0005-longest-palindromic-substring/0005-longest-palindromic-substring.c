#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void expand(char* s, int left, int right, int* start, int* maxLen) {

    while(left >= 0 && right < strlen(s) && s[left] == s[right]) {
        left--;
        right++;
    }

    int len = right - left - 1;

    if(len > *maxLen) {
        *maxLen = len;
        *start = left + 1;
    }
}

char* longestPalindrome(char* s) {

    int n = strlen(s);

    if(n == 0)
        return "";

    int start = 0;
    int maxLen = 1;

    for(int i = 0; i < n; i++) {

        expand(s, i, i, &start, &maxLen);

        expand(s, i, i + 1, &start, &maxLen);
    }

    char* result = (char*)malloc((maxLen + 1) * sizeof(char));

    strncpy(result, s + start, maxLen);

    result[maxLen] = '\0';

    return result;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna