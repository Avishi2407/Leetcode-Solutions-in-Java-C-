class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        long long sum =0;
        int x=0;
        reverse(happiness.begin(), happiness.end());
        for(int i = 0; i<k; i++){
            if(happiness[i] - x >=0){
            sum = happiness[i] + sum -x;
            x++;
            }
        }
        return sum;
    }
};