class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if (n <= 4) return 0; // If there are 4 or fewer elements, we can change all of them
        
        sort(nums.begin(), nums.end()); // Sort the array
        
        // Compute the minimum difference by considering the four possible scenarios
        int result = min({nums[n-1] - nums[3],      // Remove the three smallest elements
                          nums[n-2] - nums[2],      // Remove two smallest and one largest
                          nums[n-3] - nums[1],      // Remove one smallest and two largest
                          nums[n-4] - nums[0]});    // Remove the three largest elements
        
        return result;
    }
};