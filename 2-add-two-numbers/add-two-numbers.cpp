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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum,carry=0;
        ListNode result(0);
        ListNode* curr=&result;
        
       while(l1||l2||carry)
      {sum=carry; //caarry of the previous addition
        if(l1)
        {
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2)
        {
            sum+=l2->val;
             l2=l2->next;
        }
        carry=sum/10;
         curr->next = new ListNode(sum % 10);
        curr = curr->next;
        


      }
      return result.next;//idk but it works somehow
    }
};