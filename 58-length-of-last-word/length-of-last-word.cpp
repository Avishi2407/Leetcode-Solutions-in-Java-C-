class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.size();
        int count = 0;
        
        // Skip trailing spaces
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        
        // Count the length of the last word
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        
        return count;
    }
};