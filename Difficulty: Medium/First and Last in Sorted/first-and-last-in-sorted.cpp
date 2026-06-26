class Solution {
  public:
      int firstpos(vector<int>&arr,int tar){
        int start=0;
        int ans=-1;
        int end=arr.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==tar){
                ans=mid;
                end=mid-1;
            }
            else if(arr[mid]>tar){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
    int lastpos(vector<int>&arr,int tar){
        int start=0;
        int ans=-1;
        int end=arr.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==tar){
                ans=mid;
                start=mid+1;
            }
            else if(arr[mid]>tar){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
    vector<int> find(vector<int>& nums, int target) {
        // code here
        return {firstpos(nums,target),lastpos(nums,target)};
        
    }
};