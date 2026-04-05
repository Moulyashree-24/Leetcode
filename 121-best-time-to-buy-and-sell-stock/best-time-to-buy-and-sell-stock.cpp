class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int max_val = *max_element(v.begin(), v.end());
        // int min_val = *min_element(v.begin(), v.end());
        int min = prices.front();
        int max = 0,profit = 0;
        for(int i=0; i<prices.size(); i++)
        {
            profit=prices[i]-min;
            if(min>prices[i])
            {
                min=prices[i];
            }
            if(profit>max)
            {
                max=profit;
            }
        }
    return max;
    }
};