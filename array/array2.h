#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        int buy = 0;
        int profit = 0;
        int diff = 0;
        for (int i = 0; i + 1 < prices.size(); i++)
        {
            if (prices[i] < prices[i + 1])
            {
                if (diff == 0)
                {
                    buy = prices[i];
                }

                diff = prices[i + 1] - buy;
                continue;
            }

            if (prices[i] > prices[i + 1] && diff > 0)
            {
                buy = 0;
                profit += diff;
                diff = 0;
                continue;
            }
        }
        return profit + diff;
    }
};