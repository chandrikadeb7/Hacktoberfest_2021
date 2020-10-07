class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode *temphead=new ListNode(0);
        temphead->next=head;
        ListNode * temp=head;
        ListNode * prev =temphead;
        while(temp!= NULL)
        {
            while(temp->next!= NULL && temp->val==temp->next->val)
                temp=temp->next;
            if(prev->next == temp)
                prev=prev->next;
            else
                prev->next=temp->next;
            temp=temp->next;

        }
        return temphead->next;
    }
};
