int strStr(char * haystack, char * needle)
{
    int len_hey = strlen(haystack);
    int len_needle = strlen(needle);
    for (int i = 0; i < len_hey - len_needle + 1; i++)
    {
        int flag = 1;
        for (int j = 0; j < len_needle; j++)
        {
            if (haystack[i+j] != needle[j])
            {
                flag = 0;
            }
        }
        if (flag)
        {
            return i;
        }
    }
    if(len_needle == 0)
    {
        return 0;
    }
    return -1;
}