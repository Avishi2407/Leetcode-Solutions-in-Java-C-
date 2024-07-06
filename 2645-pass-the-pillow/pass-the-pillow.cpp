class Solution {
public:
    int passThePillow(int n, int time) {
        if(n>time){
            return time+1;
        }
        
        else{
           int x = time%(n-1);
            if((time/(n-1))%2 == 0){
                return x+1;
            }
               else{
                   return n-x;
               }
            
           
        }
    }
};