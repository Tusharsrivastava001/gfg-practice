class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        //here we will use hashmap
        unordered_map<int,int> map;
        for(int x : arr){
            map[x]++;
        }
        //abb map me frequsency store ho gayii hai 
        std::vector<int> v;
        
        for(int i=1;i<=arr.size();i++){
            v.push_back(map[i]);
        }
        return v;
    }
};
