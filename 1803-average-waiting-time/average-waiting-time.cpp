class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        long long totalTime=0;
        int finishTime=customers[0][0];
        for(int i=0;i<n;i++){
            if(finishTime>=customers[i][0]) finishTime+=customers[i][1];
            else{
                finishTime=customers[i][0]+customers[i][1];
            }
            int waitingTime=finishTime-customers[i][0];
            totalTime+=waitingTime;
        }
        double ans=(double)(totalTime)/(double)(n);
        return ans;
    }
};