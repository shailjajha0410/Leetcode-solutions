double findMedianSortedArrays(int* nums1, int nums1Size,
                              int* nums2, int nums2Size) {

    int total = nums1Size + nums2Size;

    // Create merged array
    int merged[total];

    int i = 0;
    int j = 0;
    int k = 0;

    // Merge both arrays
    while(i < nums1Size && j < nums2Size) {

        if(nums1[i] < nums2[j]) {
            merged[k] = nums1[i];
            i++;
        }
        else {
            merged[k] = nums2[j];
            j++;
        }

        k++;
    }

    // Remaining elements of nums1
    while(i < nums1Size) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    // Remaining elements of nums2
    while(j < nums2Size) {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    // Find median

    // Odd length
    if(total % 2 == 1) {
        return merged[total / 2];
    }

    // Even length
    else {

        int mid1 = merged[(total/2) - 1];
        int mid2 = merged[total/2];

        return (mid1 + mid2) / 2.0;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
