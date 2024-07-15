class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i =0;
        int j =0;
        if(s.size() == NULL){
            return true;
        }
        while(j<t.size()){
            if(s[i] == t[j]){
                i++;
                j++;
            }
            else if(s[i] != t[j]){
                j++;
            }
            
            
            if(i == s.size()){
                return true;
            }
        }
        return false;
    }
};