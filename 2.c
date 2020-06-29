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
    struct ListNode* answer = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *writeanswer = answer;
    writeanswer->next = 0;
    writeanswer->val = 0;
    while (l1 != 0 || l2 != 0)
    {
        int sum = writeanswer->val;
        if (l1)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        writeanswer->val = sum % 10;
        if (l1 != 0 || l2 != 0)
        {
            writeanswer->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            writeanswer = writeanswer->next;
            writeanswer->val = sum / 10;
        }
        else if (sum / 10 == 0)
        {
            writeanswer->next = 0;
        }
        else
        {
            writeanswer->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            writeanswer = writeanswer->next;
            writeanswer->val = sum / 10;
            writeanswer->next = 0;
        }
    }
    return answer;
}