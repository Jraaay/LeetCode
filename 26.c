int removeDuplicates(int* nums, int numsSize)
{
    if (numsSize ==0)
    {
        return 0;
    }
    int place = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != nums[place])
        {
            nums[place++ + 1] = nums[i];
        }
    }
    return place + 1;
}