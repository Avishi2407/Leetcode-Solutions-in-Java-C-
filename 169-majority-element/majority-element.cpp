class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(auto ele:nums){
            mp[ele]++;
            
        }
        
        for(auto ele: mp){
            if(ele.second > n/2){
                return ele.first;
            }
        }
        return -1;
    }
};