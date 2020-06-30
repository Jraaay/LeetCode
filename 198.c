int rem_money[1000];

int *start = 0;

int rob(int *nums, int numsSize)
{
    for (int i = 0; i < 1000; i++)
    {
        rem_money[i] = -1;
    }
    start = nums;
    return real_rob(nums, numsSize);
}

int real_rob(int *nums, int numsSize)
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
        if (nums - start < 1000 && rem_money[nums - start] != -1)
        {
            return rem_money[nums - start]; 
        }
        int max = 0;
        for (int i = 1; i < numsSize; i++)
        {
            int money = real_rob(&nums[i], numsSize - i);
            if (i > 1)
            {
                money += nums[0];
            }
            if (money > max)
            {
                max = money;
            }
        }
        if (nums - start < 1000)
        {
            rem_money[nums - start] = max;
        }
        return max;
    }
}