class Solution {
public:
    bool isHappy(int n) {
       map<int, int> mp;
    
    while (n != 1 && mp.find(n) == mp.end()) {
        mp[n] = 1;
        int sum = 0;
        
        while (n > 0) {
            int x = n % 10;
            sum = sum + ( x * x);
            n = n/10;
        }
        
        n = sum;
    }
    
    return n == 1;
    }
};