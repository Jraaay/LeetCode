int majorityElement(int* nums, int numsSize)
{
    int val[1000] = {0};
    for (int i = 0; i < numsSize; i++)
    {
        if (++val[nums[i]] > numsSize/2)
        {
            return nums[i];
        }
    }
    return -1;
}