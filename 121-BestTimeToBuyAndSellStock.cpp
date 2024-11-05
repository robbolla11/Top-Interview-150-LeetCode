class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX; //val maximo

        for (int price : prices) 
        {
            if (price < minPrice) //comprar en el precio minimo
                minPrice = price;
            else
                maxProfit = max(maxProfit, price - minPrice); //obtiene la max profit, precio actual - menor precio
        }
        return maxProfit;
    }
};
