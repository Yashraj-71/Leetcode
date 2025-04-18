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
    ListNode* middleNode(ListNode* head) {
    //     int n=0;
    // ListNode* temp =head;       // Brute force approach
    // while(temp!=NULL){
    //     n+=1;
    //     temp=temp->next;
    // }
    // temp=head;
    // for(int i=0;i<n/2;i++){
    //     temp=temp->next;
    // }
    // return temp;
    // }

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    
};
