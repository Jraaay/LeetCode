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

struct ListNode *reverseList(struct ListNode *head);

int main()
{
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode*));
    head->val = 1;
    head->next = (struct ListNode*)malloc(sizeof(struct ListNode*));
    head->next->val = 2;
    head->next->next = 0;
    reverseList(head);
    return 0;
}

struct ListNode *reverseList(struct ListNode *head)
{
    if (head == NULL)
    {
        return 0;
    }
    struct ListNode *list[10000] = {0};
    int i = 0;
    while (head != NULL)
    {
        list[i++] = head;
        head = head->next;
    }
    head = list[i - 1];
    for (i--; i > 0; i--)
    {
        list[i]->next = list[i - 1];
    }
    list[0]->next = NULL;
    return head;
}