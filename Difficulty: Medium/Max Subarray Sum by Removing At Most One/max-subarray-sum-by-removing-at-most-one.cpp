class Solution {
public:
    int maxSumSubarray(vector<int>& arr) {
        int n = arr.size();

        vector<int> keep(n), drop(n);

        keep[0] = arr[0];
        drop[0] = arr[0];

        int ans = arr[0];

        for (int i = 1; i < n; i++) {

            // No deletion
            keep[i] = max(arr[i], keep[i - 1] + arr[i]);

            // One deletion allowed
            drop[i] = max(keep[i - 1], drop[i - 1] + arr[i]);

            ans = max(ans, max(keep[i], drop[i]));
        }

        return ans;
    }
};