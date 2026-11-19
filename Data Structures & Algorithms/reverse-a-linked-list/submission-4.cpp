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

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode* fp=head,*ln=nullptr ,*temp;
        while(fp!=nullptr)
        {
            temp=fp;
            fp=fp->next;
            temp->next=ln;
            ln=temp;
        }
        return ln;
    }
};
