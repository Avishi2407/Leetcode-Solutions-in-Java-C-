class Solution {
public:
    int longestPalindrome(string s) {
        map<int,int> mp;
        
        for(auto ele:s){
            mp[ele-'0']++;
            
        }
        int count = 0;
        int x =0;
        for(auto ele: mp){
            if(ele.second % 2 == 0){
                count = count + ele.second;
            }
            else if(ele.second %2!=0){
                count = count + ele.second - 1;
                x++;
            }
        }
        if(x >=1){
            return count+1;
        }
        return count;
    }
};