#pragma GCC optimize("O3, unroll-loops")
static int maxArea(int* height, int n) {
    int A=0;
    for(int l=0, r=n-1; l<r; ){
        A=fmax(A, fmin(height[l], height[r])*(r-l));
        if (height[r]<height[l]) r--;
        else l++;
    }
    return A;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna