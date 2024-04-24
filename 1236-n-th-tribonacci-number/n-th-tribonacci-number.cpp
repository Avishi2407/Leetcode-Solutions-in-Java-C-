class Solution {
public:
    int tribonacci(int n) {
        
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        
        int sum = 0;
        int x =0;
        int y =1;
        int z =1;
        int i =3;
        while(i<=n){
            sum =x+ y+z;
            x=y;
            y=z;
            z= sum;
            i++;
        }
        
        return sum;
    }
};