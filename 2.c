/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

int main()
{
    struct ListNode* l1,* l2;
    l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    l1->val = 2;
    l2->val = 5;
    l1->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    l2->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    l1->next->val = 4;
    l2->next->val = 6;
    l1->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    l2->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    l1->next->next->val = 3;
    l2->next->next->val = 4;
    l1->next->next->next = 0;
    l2->next->next->next = 0;
    struct ListNode* answer = addTwoNumbers(l1, l2);
    while(answer->next != 0)
    {
        printf("%d",answer->val);
        answer = answer->next;
    }
    printf("%d",answer->val);
    system("pause");
    return 0;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    int i = 1;
    int num1 = 0, num2 = 0;
    while (l1->next != 0)
    {
        num1 += l1->val * i;
        i *= 10;
        l1 = l1->next;
    }
    num1 += l1->val * i;
    i = 1;
    while (l2->next != 0)
    {
        num2 += l2->val * i;
        i *= 10;
        l2 = l2->next;
    }
    num2 += l2->val * i;
    i = num1 + num2;
    struct ListNode* answer = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* writeAnswer = answer;
    while(i != 0)
    {
        writeAnswer->val = i % 10;
        i /= 10;
        if (i != 0)
        {
            writeAnswer->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            writeAnswer = writeAnswer->next;
        }
        else
        {
            writeAnswer->next = 0;
        }
    }
    return answer;
}