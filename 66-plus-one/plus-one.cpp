class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
//         vector<int> ans;
//         int n = digits.size();
//         long long x  =0;
//         for(int i =0; i<n;i++){
//             x = x + digits[i]*pow(10,n-i-1);
//         }
//         x = x+1;
//         // cout<<x;
//         while(x>0){
//             long long t = x%10;
//             ans.push_back(t);
//             x = x/10;
//         }
//         reverse(ans.begin(), ans.end());
        
//         return ans;
        
        int n = digits.size();
        
        // Process from the least significant digit to the most significant digit
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        
        // If we have carried through the most significant digit, we need to add a new digit
        digits.insert(digits.begin(), 1);
        return digits;
    }
};