/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        int carry=0;
        ListNode node=null;
        ListNode temp=node;
        while (l1!=null && l2!=null){
            int sum=l1.val+l2.val;
            int digit=(sum+carry)%10;
            
            if (carry>0)
            {
                carry--;
            }
            carry=sum/10;
            Console.WriteLine(digit);
            ListNode child = new ListNode(digit);
            if (node == null){
                node =temp=child;
            }
            else {
                temp.next=child;
                temp=temp.next;
            }
            l1=l1.next;
            l2=l2.next;
        }
        while (l1!= null){
            
            int sum=l1.val+carry;
            int digit=sum%10;
            if (carry>0)
            {
                carry--;
            }
             carry=sum/10;
            ListNode child = new ListNode(digit);
            if (node == null){
                node =temp=child;
            }
            else {
                temp.next=child;
                temp=temp.next;
            }
            l1=l1.next;
        }
        while (l2!= null){
             int sum=l2.val+carry;
            int digit=(l2.val+carry)%10;
            if (carry>0)
            {
                carry--;
            }
    carry=sum/10;
    Console.WriteLine(carry);
            ListNode child = new ListNode(digit);
            if (node == null){
                node =temp=child;
            }
            else {
                temp.next=child;
                temp=temp.next;
            }
            l2=l2.next;
        }
        
        if (carry>0){
            //Console.WriteLine(carry);
               ListNode child = new ListNode(carry);
            if (node == null){
                node =temp=child;
            }else{
                temp.next=child;
                temp=temp.next;
            }
            }
        return node;
    }
}
