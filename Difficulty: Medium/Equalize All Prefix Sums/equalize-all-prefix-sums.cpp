class Solution {
  public:
    vector<int> optimalArray(vector<int> &arr) {
        int n = arr.size();
        
        vector<long long> prefix(n);
        vector<int> ans(n);
        
        // Step 1: prefix sum
        prefix[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + arr[i];
        }
        
        // Step 2: compute answer
        for (int i = 0; i < n; i++) {
            int mid = i / 2;
            
            long long left = arr[mid] * (mid + 1) - prefix[mid];
            
            long long right = (prefix[i] - prefix[mid]) 
                              - arr[mid] * (i - mid);
            
            ans[i] = left + right;
        }
        
        return ans;
    }
};