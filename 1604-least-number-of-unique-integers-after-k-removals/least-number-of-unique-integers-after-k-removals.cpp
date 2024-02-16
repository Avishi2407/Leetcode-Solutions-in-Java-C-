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
        int count =0; 
        sort(v.begin() , v.end());
        for(int i =0; i< v.size(); i++){
            if(v[i] <= k ){
                
                k=k-v[i];
                v[i] = 0;
            }
            if(v[i]!= 0 ){
                count ++;
            }
            
        }
        return count;
    }
};