int steps[50] = {0};

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
        if (n >= 50)
        {
            return climbStairs(n - 1) + climbStairs(n - 2);
        }
        else if (steps[n] == 0)
        {
            steps[n] = climbStairs(n - 1) + climbStairs(n - 2);
        }
        return steps[n];
    }
}