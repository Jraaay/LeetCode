#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    char *pub, place = 0;
    int i;
    pub = (char *)malloc(sizeof(char) * 10000);
    pub[0] = 0;
    if (strsSize != 0)
    {
        int flag = 1;
        for (i = 0; i < strlen(strs[0]) && flag; i++)
        {
            for (int j = 1; j < strsSize && flag; j++)
            {
                if (strs[j][i] != strs[0][i])
                {
                    flag = 0;
                }
            }
            if (flag)
            {
                pub[i] = strs[0][i];
            }
            else
            {
                pub[i] = 0;
            }
        }
    }
    return pub;
}

int main()
{
    char **strs = (char **)malloc(sizeof(char *) * 3);
    for (int i = 0; i < 3; i++)
    {
        strs[i] = (char *)malloc(sizeof(char) * 100);
    }
    strcpy(strs[0], "flower");
    strcpy(strs[1], "flow");
    strcpy(strs[2], "flight");
    puts(longestCommonPrefix(strs, 3));
    system("pause");
}