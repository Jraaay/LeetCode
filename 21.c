/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* answer = NULL;
    struct ListNode* writeanswer;
    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            if (answer)
            {
                writeanswer->next = l1;
                writeanswer = writeanswer->next;
            }
            else
            {
                answer = l1;
                writeanswer = l1;
            }
            l1 = l1->next;
        }
        else
        {
            if (answer)
            {
                writeanswer->next = l2;
                writeanswer = writeanswer->next;
            }
            else
            {
                answer = l2;
                writeanswer = l2;
            }
            l2 = l2->next;
        }
    }
    if (l1 && answer)
    {
        writeanswer->next = l1;
    }
    else if (l2 && answer)
    {
        writeanswer->next = l2;
    }
    else if (l1)
    {
        answer = l1;
    }
    else
    {
        answer = l2;
    }
    return answer;
}