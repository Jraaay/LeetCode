int reverse(int x){
    int inverse = 0;
    while (x)
    {
        inverse = inverse * 10 + x % 10;
        x /= 10;
    }
    return inverse;
}