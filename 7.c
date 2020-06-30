int reverse(int x){
    int inverse = 0;
    while (x)
    {
        if (inverse > 214748365)
        {
            return 0;
        }
        inverse = inverse * 10 + x % 10;
        x /= 10;
    }
    return inverse;
}