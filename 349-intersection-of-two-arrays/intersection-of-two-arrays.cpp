class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
         set<int> A;

         sort(nums1.begin(), nums1.end());
         sort(nums2.begin(), nums2.end());

         set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), inserter(A, A.begin()));
        
        return vector<int>(A.begin(), A.end());
    }
        
    
};