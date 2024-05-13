class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> mpp(26,0);
        const int m = s.size();const int n = t.size();
        for(int i=0;i<n;++i){mpp[t[i]-'a']++;}
        for(int i=0;i<m;++i){mpp[s[i]-'a']--;}
        for(int i=0;i<26;++i){if(mpp[i]==1){return i+'a';}}
        return 'a';
    }
};