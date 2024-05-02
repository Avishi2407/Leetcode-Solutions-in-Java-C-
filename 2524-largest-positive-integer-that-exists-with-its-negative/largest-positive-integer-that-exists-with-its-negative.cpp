class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int sum =0;
        int n = nums.size();
        for(int i =0; i<n; i++){
            for(int j =0; j<n ;j++){
                if(nums[i] + nums[j] ==0){
                    sum  = max(abs(nums[i]), sum);
                }
                
            }
        }
        if(sum == 0){
            return -1;
        }
        return sum;
    }
};