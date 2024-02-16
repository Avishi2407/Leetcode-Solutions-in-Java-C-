class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> mp;
        vector<int> v;
        for(auto it : arr){
            mp[it]++;
        }
        
        for(auto a: mp){
            v.push_back(a.second);
        }
        
        sort(v.begin() , v.end());
        int i = 0;
        while (k > 0 && i < v.size()) {
            if (v[i] <= k) {
                k -= v[i];
                i++;
            } else {
                break;
            }
        }
        return v.size() - i;
    }
};