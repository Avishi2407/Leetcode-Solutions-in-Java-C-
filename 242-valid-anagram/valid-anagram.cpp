class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        map<char,int> mp1;
        map<char, int> mp2;
        
        for(auto ele: s){
            mp1[ele]++;
        }
        for(auto ele: t){
            mp2[ele]++;
        }
        
        for(int i =0; i< s.size() ; i++){
            if(mp2.find(s[i]) != mp2.end()){
                if(mp1[s[i]] != mp2[s[i]]){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
    
};