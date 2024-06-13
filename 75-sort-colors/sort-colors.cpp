class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int arr[3] = {0};
        for(int ele: nums)
            arr[ele]++;
        
        int n = nums.size();
        int count =0;
        for(int i =0; i< 3; i++){
            fill(nums.begin()+count , nums.begin()+count+ arr[i], i);
            count = count + arr[i];
        }
        
    }
};