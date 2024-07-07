class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalbottles =numBottles;
        int drinkbottle = numBottles;
        while(totalbottles/numExchange > 0){
            drinkbottle = drinkbottle + totalbottles/numExchange;
            totalbottles = totalbottles/numExchange + totalbottles%numExchange;
            
        }
        return drinkbottle;
    }
};