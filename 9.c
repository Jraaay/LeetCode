bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    else
    {
        if (x == reverse(x))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int reverse(int x)
{
    int inverse = 0;
    while (x)
    {
        if (inverse >= 214748365 || inverse <= -214748365)
        {
            return 0;
        }
        inverse = inverse * 10 + x % 10;
        x /= 10;
    }
    return inverse;
}