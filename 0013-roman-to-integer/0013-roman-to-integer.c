int roman(char c){
    if (c=='I'){return 1;}
    if (c=='V'){return 5;}
    if(c=='X'){return 10;}
    if(c=='L'){return 50;}
    if(c=='C'){return 100;}
    if(c=='D'){return 500;}
    if(c=='M'){return 1000;}
    else{return 0;}
}

#include<string.h>
int romanToInt(char* s) {
    int result = 0;
    int n = strlen(s);

    for(int i = 0; i < n; i++){
        int current = roman(s[i]);

        if(i == n-1){                  // ✅ check last FIRST!
            result = result + current; // always add last character
        }
        else{
            int next = roman(s[i+1]); // ✅ only read next if it exists!
            if(current >= next){
                result = result + current;
            }
            else{
                result = result - current;
            }
        }
    }
    return result;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna