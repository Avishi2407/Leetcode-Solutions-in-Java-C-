class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count =0;
        for(int i =0;i<n;i++){
            string s = details[i];
            if(s[11] >'6'){ 
                count++;
            }
            else if(s[11] =='6'&& s[12] >'0'){
                count++;}
        }
        return count;
        
    }
};