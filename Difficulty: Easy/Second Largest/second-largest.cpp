class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
       //here we will maintain the two varible n all 
       int largest=-1;
       int second=-1;
       for(int i=0;i<arr.size();i++){
            if(largest<arr[i]){
                second=largest;
                largest=arr[i];
            }
            else if(arr[i]!=largest && arr[i]>second){
                second=arr[i];
            }
       }
       return second;
    }
};