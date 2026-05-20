int maxArea(int* height, int heightSize) {

    int left = 0;
    int right = heightSize - 1;

    int maxWater = 0;

    while(left < right) {

        int h;

        if(height[left] < height[right]) {
            h = height[left];
        } else {
            h = height[right];
        }

        int width = right - left;

        int area = h * width;

        if(area > maxWater) {
            maxWater = area;
        }

        if(height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna