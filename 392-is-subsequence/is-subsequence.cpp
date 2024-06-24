class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int i =0;
        int j =0;
        
        while (i < n && j < m) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }
    
    // If we have traversed all characters in s, then it's a subsequence of t
    return i == n;
    }
};