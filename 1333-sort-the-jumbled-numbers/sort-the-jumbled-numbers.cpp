class Solution {
public:
     vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>> mp;
        for(int i = 0; i < nums.size(); i++){
            int val = nums[i];
            int newNum = 0;
            int j = 1;
            if(val == 0){
                newNum = mapping[0];
            }
            else{
                while(val != 0){
                int mod = val % 10;
                newNum = newNum + j * mapping[mod];
                val /= 10;
                j *= 10;
                }
            }
            mp.push_back({newNum,i});
        }
        sort(mp.begin(),mp.end());
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            pair<int,int> p = mp[i];
            result.push_back(nums[p.second]);
        }
        return result;
    }
};