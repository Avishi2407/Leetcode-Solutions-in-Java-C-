class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while(n>0){
            int x = n;
            while(x>1){
                if(x%5 == 0){
                    count++;
                    x = x/5;
                }
                else{
                    break;
                }
            }
            n--;
        }
        return count;
    }
};