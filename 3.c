int lengthOfLongestSubstring(char * s)
{
    int countmax = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int count = 0;
        char letter[128];
        if (letter[s[i]]++ == 0)
        {
            count++;
        }
        else
        {
            if (count > countmax)
            {
                countmax = count;
            }
            i = strlen(s);
        }
    }
}