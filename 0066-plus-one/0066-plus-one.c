/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {

     // Traverse from last digit to first
    for (int i = digitsSize-1; i>= 0; i--){

        if(digits[i] < 9) {
            digits[i]++;
            *returnSize= digitsSize;
            return digits;
        }
       
        // If digit is 9, make it 0 and continue carry
        digits[i] = 0;
}

// If all digits were 9
int* result = (int*)malloc((digitsSize + 1) * sizeof(int));

    
    result[0] = 1; // leading 1
    for (int i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }

    *returnSize = digitsSize + 1;
    return result;
    
}