/**
 * Definition for singly-linked list.
 */

public class ListNode {
    int val;
    ListNode next;

    ListNode() {
    }

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}

class Solution {
    public int fg(int x, int y) {
        int r = 0, a, b;
        a = (x > y) ? x : y;
        b = (x < y) ? x : y;
        r = b;
        while (a % b != 0) {
            r = a % b;
            a = b;
            b = r;
        }
        return r;
    }

    public ListNode insertGreatestCommonDivisors(ListNode head) {
        ListNode leftt = head;
        ListNode right = head.next;
        while (right != null) {
            int lval = leftt.val;
            int rval = right.val;
            int gcd = fg(lval, rval);
            ListNode nli = new ListNode();
            nli.val = gcd;
            leftt.next = nli;
            nli.next = right;

            leftt = right;
            right = right.next;
        }

        return head;

    }
}
