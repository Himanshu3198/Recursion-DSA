class Solution {
public:
        int ans;
    void solve(int bottle,int exchange){
        
        if(bottle<exchange) return;
        ans+=(bottle/exchange);
        solve(bottle/exchange+bottle%exchange,exchange);
    }
    int numWaterBottles(int numBottles, int numExchange) {
      
        ans=numBottles;
        solve(numBottles,numExchange);
        return ans;
    }
};
