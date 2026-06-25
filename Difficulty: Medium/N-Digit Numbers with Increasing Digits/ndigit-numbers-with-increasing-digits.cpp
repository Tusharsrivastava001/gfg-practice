class Solution {
public:
    
    vector<int> ans;
    
    void solve(int len, int n, int num, int lastDigit) {
        
        if(len == n) {
            ans.push_back(num);
            return;
        }
        
        for(int d = lastDigit + 1; d <= 9; d++) {
            solve(len + 1, n, num * 10 + d, d);
        }
    }
    
    vector<int> increasingNumbers(int n) {
        
        ans.clear();
        
        if(n == 1) {
            vector<int> res;
            for(int i = 0; i <= 9; i++)
                res.push_back(i);
            return res;
        }
        
        if(n > 9) return {};
        
        for(int start = 1; start <= 9; start++) {
            solve(1, n, start, start);
        }
        
        return ans;
    }
};