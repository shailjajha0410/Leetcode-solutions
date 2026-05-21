int value(char c) {

    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }

    return 0;
}

int romanToInt(char* s) {

    int total = 0;

    for(int i = 0; s[i] != '\0'; i++) {

        int current = value(s[i]);
        int next = value(s[i + 1]);

        // Subtraction case
        if(current < next)
            total -= current;

        // Normal addition
        else
            total += current;
    }

    return total;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna