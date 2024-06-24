class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        
        if(m>n){
            
            return -1;
        }
        
        int pos = haystack.find(needle);
    return pos;
        
    }
};