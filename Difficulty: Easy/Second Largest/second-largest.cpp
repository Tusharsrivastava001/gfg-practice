class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        set<int> s(arr.begin(), arr.end());
        if(s.size()<2) return -1;
        vector<int> v;
        for(int x : s){
            v.push_back(x);
        }
        
        return v[v.size()-2];

    }
};