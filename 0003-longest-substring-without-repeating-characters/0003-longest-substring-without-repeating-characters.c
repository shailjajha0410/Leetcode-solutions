int lengthOfLongestSubstring(char * s) {

    int freq[256] = {0};

    int left = 0;
    int maxLen = 0;

    for(int right = 0; s[right] != '\0'; right++) {

        freq[s[right]]++;

        while(freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }

        int currentLen = right - left + 1;

        if(currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    return maxLen;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna