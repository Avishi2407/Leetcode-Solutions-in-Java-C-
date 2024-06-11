class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int maxelement = *max_element(arr1.begin(), arr1.end());
        vector<int> count(maxelement + 1);
        
        for(int i :arr1){
            count[i]++;
        }
        
        vector<int> result;
        
        for(int i :arr2){
            while(count[i]>0){
                result.push_back(i);
                count[i]--;
            }
        }
        
        for(int i =0; i<=maxelement;i++){
            while(count[i] > 0){
                result.push_back(i);
                count[i]--;
            }
        }
        return result;
    }
};