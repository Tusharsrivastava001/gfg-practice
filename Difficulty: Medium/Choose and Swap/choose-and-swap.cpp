class Solution {
public:
    string chooseSwap(string &s) {
        // Array to store the first occurrence of each character ('a' to 'z')
        vector<int> firstOcc(26, -1);
        int n = s.length();
        
        // Record the first occurrence of each character
        for (int i = 0; i < n; i++) {
            if (firstOcc[s[i] - 'a'] == -1) {
                firstOcc[s[i] - 'a'] = i;
            }
        }
        
        // Traverse the string to find the first eligible character to swap
        for (int i = 0; i < n; i++) {
            bool flag = false;
            
            // Check for any character smaller than s[i]
            for (int j = 0; j < (s[i] - 'a'); j++) {
                // The smaller character must exist and appear after the first occurrence of s[i]
                if (firstOcc[j] != -1 && firstOcc[j] > firstOcc[s[i] - 'a']) {
                    char charToReplace = s[i];
                    char replacementChar = (char)('a' + j);
                    
                    // Perform the swap across the entire string
                    for (int k = 0; k < n; k++) {
                        if (s[k] == charToReplace) {
                            s[k] = replacementChar;
                        } else if (s[k] == replacementChar) {
                            s[k] = charToReplace;
                        }
                    }
                    flag = true;
                    break;
                }
            }
            // Break early since we are allowed at most one type of swap operation
            if (flag) break;
        }
        
        return s;
    }
};