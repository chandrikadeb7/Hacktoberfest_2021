public class Solution {
    public Node mergeTwoLists(Node head1, Node head2) {
        if (head1 == null && head2 == null)
            return null;
        else if (head1 == null && head2 != null)
            return head2;
        else if (head2 == null && head1 != null)
            return head1;
        if (head1.val <= head2.val)
            head1.next = mergeTwoLists(head1.next, head2);
        else {
            Node temp = head2;
            head2 = head2.next;
            temp.next = head1;
            head1 = temp;
            head1.next = mergeTwoLists(head1.next, head2);
        }
        return head1;

    }
}
