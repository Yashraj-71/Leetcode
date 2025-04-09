/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // using map 

// class Solution {
// public:
//     bool hasCycle(ListNode* head) {
//         if (head == NULL) {
//             return false;
//         }
//         map<ListNode*, bool> visited;
//         ListNode* temp = head;

//         while (temp != NULL) {
//             if (visited[temp] == true) {
//                 return true;
//             }
//             visited[temp] = true;
//             temp = temp->next;
//         }
//         return false;
//     }
// };

// using two pointer
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != slow) {
            if (fast->next == NULL || fast->next->next == NULL) {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};