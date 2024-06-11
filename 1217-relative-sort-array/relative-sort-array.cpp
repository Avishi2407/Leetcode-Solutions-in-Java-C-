class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<int> alter;
       map<int,int> mp;
        for(auto ele: arr1){
            mp[ele]++;
        }
        int j = 0;
        for(auto ele: arr2){
            
            if(mp.find(ele)!=mp.end()){
                while(mp[ele] > 0){
                    ans.push_back(ele);
                    (mp[ele])--;
                }
                mp.erase(ele);
            }
        }
        
        for(auto &ele: mp){
            while (ele.second > 0){
                alter.push_back(ele.first);
                ele.second--;
            }
            
        }
        sort(alter.begin() , alter.end());
        ans.insert(ans.end(), alter.begin(), alter.end());
        
        
        return ans;
        
    }
};