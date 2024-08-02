class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int len= citations.size();
        for(int i =0;i<citations.size();i++){
            if(citations[i] >= len){
                return len;
            }
            len--;
        }   
        return 0;
    }
};