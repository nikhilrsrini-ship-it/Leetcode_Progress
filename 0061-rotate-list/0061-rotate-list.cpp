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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) return head;
        int n=1;
        ListNode* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
            n++;
        }
        k = k % n ;
        while(k>0){
            ListNode* curr = head;
            ListNode* lastbutone = head;
            while(curr->next != nullptr){
                curr = curr->next;
            }
            while(lastbutone->next!=nullptr && lastbutone->next->next != nullptr)
                lastbutone = lastbutone->next;
            curr->next = head;
            head = curr;
            lastbutone->next = nullptr;
            k--;
        }
        return head;
    }
};