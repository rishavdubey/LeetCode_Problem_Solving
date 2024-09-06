/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
public ListNode modifiedList(int[] nums, ListNode head) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for (int num : nums) {
            mp.put(num, mp.getOrDefault(num, 0) + 1);
        }

        ListNode root = head;
        ListNode ans = root;
        ListNode prev = null;

        while (root != null && root.next != null) {
            int val = root.val;
            if (mp.containsKey(val)) {
                int tempVal = root.next.val;
                root.val = tempVal;
                root.next = root.next.next;
            } else {
                prev = root;
                root = root.next;
            }
        }

        if (root != null && mp.containsKey(root.val)) {
            if (prev != null) {
                prev.next = null;
            } else {
                ans = null; // If the head itself needs to be removed
            }
        }

        return ans;

    }
}