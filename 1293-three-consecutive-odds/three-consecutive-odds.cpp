class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
    int consecutiveOdds = 0; 

    for (int num : arr) {
        if (num % 2 != 0) { 
            consecutiveOdds++; 
            if (consecutiveOdds == 3) { 
                return true; 
            }
        } else {
            consecutiveOdds = 0; 
        }
    }

    return false; 
    }
};