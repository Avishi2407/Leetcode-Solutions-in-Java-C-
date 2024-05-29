class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>vec(m+n);
        for(int i =0;i<m;i++){
            vec[i] = nums1[i];
        }
        for(int i =0;i<n;i++){
            vec[i+m] = nums2[i];
        }
        sort(vec.begin(), vec.end());
        for(int i =0;i<nums1.size(); i++){
            nums1[i] = vec[i];
        }
        
    }
};