class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int min_price = 10001; 
    int maxProfitt = 0;

    for (int price : prices)
     {
     if (price < min_price)
     {min_price = price;
     }
        int profit = price - min_price;
        
        
        if (profit > maxProfitt) {
            maxProfitt = profit;
        }
    }
    return maxProfitt; 
    }
};