class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        map<char,int> mp;
        int i =0;
        int j =0;
        int maxi =0;
        while(j<n){
            mp[s[j]]++;
            while(mp[s[j]] > 1){
                mp[s[i]]--;
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;
            }
            maxi = max(maxi, j-i+1);
            j++;
        }
        return maxi;
    }
};