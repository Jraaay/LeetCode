int maxProfit(int* prices, int pricesSize)
{
    int max = 0;
    for (int i = 0; i < pricesSize - 1; i++)
    {
        for (int j = i + 1; j < pricesSize; j++)
        {
            if (prices[j] - prices[i] > max)
            {
                max = j - i;
            }
        }
    }
    return max;
}