#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLongestSubstring(char *s);

int main()
{
    char s[] = "abc";
    printf("%d", lengthOfLongestSubstring(s));
    system("pause");
    return 0;
}

int lengthOfLongestSubstring(char *s)
{
    int i, start = 0, count = 0, max = 0;
    int letter[128] = {0};
    for (i = 0; i < strlen(s); i++)
    {
        if (letter[s[i]] > start)
        {
            if (i - start > max)
            {
                max = i - start;
            }
            start = letter[s[i]];
        }
        letter[s[i]] = i + 1;
    }
    return i - start > max ? i - start : max;
}