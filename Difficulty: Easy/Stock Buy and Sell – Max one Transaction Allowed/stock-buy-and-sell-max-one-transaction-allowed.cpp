class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int minp=prices[0];
        int maxi=0;
        for(int i=0;i<prices.size();i++){
            int prof=prices[i]-minp;
            minp=min(minp,prices[i]);
            maxi=max(prof,maxi);
        }
        return maxi;
    }
};
