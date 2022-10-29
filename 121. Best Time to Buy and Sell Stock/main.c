int maxProfit(int* prices, int pricesSize){
    int profit = 0;
    int left = prices[0];
    
    for(int i=1;i<pricesSize;i++){
        if(prices[i] < left) left = prices[i];
        if(prices[i] > left){
            profit = (prices[i]-left)>profit?prices[i]-left:profit;
        }
    }
    
    return profit;
}