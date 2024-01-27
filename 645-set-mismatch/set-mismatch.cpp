class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();
        int q = -1, w = -1;
        map<int,int> mp;
        for(auto a: nums){
            mp[a]++;
            if(mp[a] > 1){
                 q = a;
            }
        }
        
 
        for (int i = 1; i <= n; i++) {
            if (mp.find(i) == mp.end()) {
                 w = i; 
                break;
            }
        }
        
       return { q, w };
    }
    
};