class Solution {
public:
    bool divisibleByK(vector<int>& arr, int k) {
        vector<bool> dp(k, false);

        for (int x : arr) {
            vector<bool> ndp(dp);

            // Start a new subset
            ndp[x % k] = true;

            // Extend existing subsets
            for (int r = 0; r < k; r++) {
                if (dp[r]) {
                    ndp[(r + x) % k] = true;
                }
            }

            dp = ndp;

            // Found a subset divisible by k
            if (dp[0])
                return true;
        }

        return false;
    }
};