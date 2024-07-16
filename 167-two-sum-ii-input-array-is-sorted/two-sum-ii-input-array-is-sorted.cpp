class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        if(n < 2){
            return {0,0};
        }
        
        int i =0;
        int j = n-1;
        int sum =0;
        while(i<j){
            sum = nums[i] + nums[j];
            if(sum == target){
                break;
            }
            if(sum>target){
                j--;
            }
            if(sum<target){
                i++;
            }
        }
        return {i+1, j+1};
    }
};