class Solution {
public:
    bool isPalindrome(string s) {
        for (auto& x : s) { 
           x = tolower(x); 
           } 
        int i =0;
        int j =s.size();
        
        while(i<=j){
            if(!isalnum(s[i])){
                i++;
            }
            else if(!isalnum(s[j])){
                j--;
            }
            
            else if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
            
            
        }
        return true;
        
    }
};