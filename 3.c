#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLongestSubstring(char * s);

int main()
{
    char s[] = "abcabcbb";
    printf("%d",lengthOfLongestSubstring(s));
    system("pause");
    return 0;
}

int lengthOfLongestSubstring(char * s)
{
    int countmax = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int count = 0;
        char letter[128] = {0};
        for (int j = i; j < strlen(s); j++)
        {
            if (letter[s[j]]++ == 0)
            {
                count++;
            }
            else
            {
                if (count > countmax)
                {
                    countmax = count;
                }
                j = strlen(s);
            }
        }
    }
    return countmax;
}