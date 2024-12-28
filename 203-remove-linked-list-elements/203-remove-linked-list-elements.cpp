/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int valu)
    {
        ListNode *dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode *current = dummyHead;
        while (current->next != nullptr)
        {
            if (current->next->val == valu)
            {
                ListNode *nodeToDelete = current->next;
                current->next = current->next->next;
                delete nodeToDelete;
            }
            else
            {
                current = current->next;
            }
        }
        head = dummyHead->next;
        delete dummyHead;
        return head;
    }
};