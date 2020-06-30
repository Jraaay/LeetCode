int maxProfit(int *prices, int pricesSize)
{
    int max = 0;
    {
        for (int i = 0; i < pricesSize - 1; i++)
        {
            if (prices[i + 1] > prices[i])
            {
                for (int j = i + 1; j < pricesSize; j++)
                {
                    if (prices[j] - prices[i] > max)
                    {
                        max = prices[j] - prices[i];
                    }
                }
            }
        }
    }
    return max;
}