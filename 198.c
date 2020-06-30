int rob(int *nums, int numsSize)
{
    if (numsSize == 0)
    {
        return 0;
    }
    else if (numsSize == 1)
    {
        return nums[0];
    }
    else if (numsSize == 2)
    {
        if (nums[0] > nums[1])
        {
            return nums[0];
        }
        else
        {
            return nums[1];
        }
    }
    else
    {
        int max = 0;
        for (int i = 1; i < numsSize; i++)
        {
            int money = rob(&nums[i], numsSize - i);
            if (i > 1)
            {
                money += nums[0];
            }
            if (money > max)
            {
                max = money;
            }
        }
        return max;
    }
}