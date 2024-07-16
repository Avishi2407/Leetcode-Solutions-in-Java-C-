class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi =0;
        int n = height.size();
        int area = 0;
        int i = 0;
        int j = n-1;
        while(i<j){
            if(height[i]>height[j]){
                area = height[j]*(j-i);
                j--;
            }
            else{
                area = height[i]*(j-i);
                i++;
            }
            
            maxi = max(maxi,area);
            

        }
        return maxi;
    }
};