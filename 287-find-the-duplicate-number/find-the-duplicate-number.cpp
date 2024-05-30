class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto ele:nums){
            mp[ele]++;
        }
        
        for(auto it:mp){
            if(it.second >1){
                return it.first;
            }
        }
        return -1;
        
    }
};