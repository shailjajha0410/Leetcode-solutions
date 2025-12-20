int climbStairs(int n) {

    // if there is only 1 step, only 1 way to climb it
    if (n == 1)
        return 1;

    // If there are 2 steps, there are 2 ways:
    // (1+1) or (2)
    if (n == 2)
        return 2;

    // prev1 stores ways to reach step 1
    int prev1 = 1;

    // prev2 stores ways to reach step 2
    int prev2 = 2;

    // curr will store ways to reach current step
    int curr;

    // Start calculating from step 3 up to n
    for (int i = 3; i <= n; i++) {

        // Ways to reach current step
        curr = prev1 + prev2;

        // Move values forward
        prev1 = prev2;
        prev2 = curr;
    }
    return prev2;
}
