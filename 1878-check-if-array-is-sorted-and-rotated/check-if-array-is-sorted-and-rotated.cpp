class Solution {
public:
    bool check(vector<int>& nums) {
        int x =0;
        int n = nums.size();
        for(int i =0; i< n-1; i++){
            if(nums[i] > nums[i+1]){
                x++;
            }
        }
        if (x <= 1 && (nums[0] >= nums[n - 1] || n == 1 || x==0)) {
        return true;
    } else {
        return false;
    }
        
    }
};