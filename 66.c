/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int *plusOne(int *digits, int digitsSize, int *returnSize);

int main()
{
    int digits[3] = {9,9,9};
    int returnSize;
    int* answer = plusOne(digits, 3, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d", answer[i]);
    }
    system("pause");
    return 0;
}


int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    int flag = 1;
    for (int i = digitsSize - 1; i > 0 && flag; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i]++;
            flag = 0;
        }
    }
    if (flag)
    {
        if (digits[0] == 9)
        {
            int *answer = (int *)malloc(sizeof(int) * (digitsSize + 1));
            answer[0] = 1;
            for (int i = 1; i < digitsSize + 1; i++)
            {
                answer[i] = 0;
            }
            *returnSize = digitsSize + 1;
            return answer;
        }
        else
        {
            digits[0]++;
        }
    }
    *returnSize = digitsSize;
    return digits;
}