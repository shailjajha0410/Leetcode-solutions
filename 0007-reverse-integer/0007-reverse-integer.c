int reverse(int x){

    int rev = 0;

    while(x != 0) {
        
        int digit = x % 10;

        // Overflow Check
        if (rev > 214748364 || rev < -214748364)
        return 0;

        rev = rev * 10 + digit;

        x = x / 10;
    }

    return rev;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna