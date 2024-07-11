class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        if(n==0){
            return 0;
        }
        unordered_map<int,int> mp;
        int sum =0;
        int count =0;
        mp[0] = 1;

        for (int j = 0; j < n; j++) {
            sum += arr[j];
            int x = sum - k;

            if (mp.find(x) != mp.end()) {
                count += mp[x];
            }
            
            mp[sum]++;
        }

        return count;
    } 
};