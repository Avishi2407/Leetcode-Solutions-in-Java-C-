class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        int count =0;
        for(auto i: mp){
            if(i.second <2){
                count = i.first;
            }
        }
        return count;
    }
};