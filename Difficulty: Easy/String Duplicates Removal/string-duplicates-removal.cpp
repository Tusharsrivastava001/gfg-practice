class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_set<char> set;
        string ans="";
        
        for(char ch : s){
            if(set.find(ch)==set.end()){
                set.insert(ch);
                ans+=ch;
            }
        }
        return ans;
    }
};