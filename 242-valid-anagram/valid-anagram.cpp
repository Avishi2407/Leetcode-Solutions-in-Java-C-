class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        map<char,int> mp1;
         
        for(auto ele: s){
            mp1[ele]++;
        }
        for(auto ele: t){
            mp1[ele]--;
        }
        
        for(int i =0; i<mp1.size(); i++){
            if(mp1[i] != 0){
                return false;
            }
        }
        return true;
    }
    
};