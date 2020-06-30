int rob(int* nums, int numsSize)
{
    if (numsSize == 1)
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
        for (int i = 2; i < numsSize; i++)
        {
            int money = rob(&nums[i], numsSize - i);
            if (money > max)
            {
                max = money;
            }
        }
        return max + nums[0];
    }
}