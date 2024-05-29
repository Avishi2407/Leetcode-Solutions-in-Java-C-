class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
       auto newEnd = std::remove(nums.begin(), nums.end(), val);
    
    // Calculate the new size after removal
    int newSize = std::distance(nums.begin(), newEnd);
    
    // Resize the vector to the new size
    nums.resize(newSize);
    
    return newSize;
    }
};