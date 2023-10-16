// ADD TWO NUMBERS
// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reserve order,
// and each of their nodes conatains a single digit. 
// Add the two numbers and return the sum as a linked list. 

// You may assume that two numbers do not contain any leading zero,except the number 0 itself. 


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *prehead = new ListNode();
        ListNode *pre = prehead;
        ListNode *cur1 = l1, *cur2 = l2;
        int digit = 0;
        
        while(cur1 || cur2 || digit > 0){
            if(cur1){
                digit += cur1->val;
                cur1 = cur1->next;
            }
            if(cur2){
                digit += cur2->val;
                cur2 = cur2->next;
            }
            ListNode *tmp = new ListNode(digit%10);
            pre->next = tmp;
            pre = pre->next;
            digit/=10;
        }
        
        return prehead->next;
    }
};
