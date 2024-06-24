class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int i =0;
        int j =0;
        int x=0;
        
        if(m<=n){
            while(i<n){
                if(haystack[i]!=needle[j]){
                    i++;
                }
                else if(haystack[i] == needle[j]){
                    while(x<m){
                        if(haystack[i+x] == needle[j+x]){
                            x++;
                        }
                        else{
                            x=0;
                            break;
                        }
                    }
                    
                    if(x == m){
                        return i;
                    }
                    i++;
                    j=0;
                }
            }
        }
        return -1;
    }
};