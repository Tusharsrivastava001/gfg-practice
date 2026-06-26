class Solution {
  public:
    
    int findFloor(vector<int>& arr, int x) {
        // code here
        int start=0;
        int ans=-1;
        int end=arr.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]<=x){
                start=mid+1;
                ans=mid;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
        
    }
};
