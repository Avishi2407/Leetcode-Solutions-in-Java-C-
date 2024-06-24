class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp;
        
        for(auto ele: magazine){
            mp[ele]++;
        }
        
        for(int i =0;i<ransomNote.size(); i++){
            if(mp.find(ransomNote[i]) != mp.end()){
                if(mp[ransomNote[i]] >0){
                mp[ransomNote[i]]--;
                }
                else{
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