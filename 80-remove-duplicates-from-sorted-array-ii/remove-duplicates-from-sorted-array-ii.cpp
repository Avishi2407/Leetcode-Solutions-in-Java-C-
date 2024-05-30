class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> countMap;

        // Step 1: Count the occurrences of each element
        for (int num : nums) {
            countMap[num]++;
        }

        // Step 2: Rebuild the array allowing each element at most twice
        int index = 0;
        for (auto& [num, count] : countMap) {
            int times = min(count, 2); // Limit the count to at most 2
            for (int i = 0; i < times; ++i) {
                nums[index++] = num;
            }
        }

        // Return the new length of the array
        return index;
    }
};