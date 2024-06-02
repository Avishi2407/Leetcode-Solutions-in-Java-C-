class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
         int i = 0, j = 0;
        long long sum = 0, maxi = 0;
        unordered_map<int, int> freq;

        while (j < nums.size()) {
            // Add the current element to the window and update its frequency
            freq[nums[j]]++;
            sum += nums[j];

            // If the window size exceeds k, shrink it from the left
            while (j - i + 1 > k) {
                freq[nums[i]]--;
                if (freq[nums[i]] == 0) {
                    freq.erase(nums[i]);
                }
                sum -= nums[i];
                i++;
            }

            // If the window size is exactly k and all elements are distinct
            if (j - i + 1 == k && freq.size() == k) {
                maxi = max(maxi, sum);
            }

            j++;
        }

        return maxi;
    }
};