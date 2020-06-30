int climbStairs(int n)
{
    if (0 == n)
    {
        return 1;
    }
    else if (1 == n)
    {
        return 1;
    }
    else
    {
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
}