Anuradha Kumari

Photo: https://www.nicepng.com/png/detail/192-1927624_wolf-png-logo-graphic-free-stock-wolf-logo.png

Github: https://github.com/AnuNancy

Q. Remove Nth Node From End of List

Answer-
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
         
       int count=0;
        while(temp->next != NULL)
        {
          count=count+1;
            temp=temp->next;
        }
        
        count=count-n;
        int i=1;
        temp=head;
        while(i<=count)
        {
            temp=temp->next;
            i++;
            
        }
        if(count<0)
        { head=head->next;}
            else
        {temp->next=temp->next->next;
        }
        return head;
    }
    
};
