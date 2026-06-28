class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int maxright=arr.back();
        std::vector<int> ans;
        ans.push_back(maxright);
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]>=maxright){
                maxright=arr[i];
                ans.push_back(maxright);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
       
    }
};