class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
    int i = 0;
    int j = 0;
    long long sum = 0;
    int minLength = INT_MAX;  
    
    while (j < n) {
        sum += nums[j];
        j++;
        
        while (sum >= target) {
            minLength = min(minLength, j - i);  
            sum -= nums[i];
            i++;
        }
    }
    
    if (minLength == INT_MAX) {
        return 0;
    }
    
    return minLength;
}
};