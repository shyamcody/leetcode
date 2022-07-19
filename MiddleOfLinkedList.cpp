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
        int length = 0;
        ListNode* iterator = new ListNode;
        iterator->val = head->val;
        iterator->next = head->next;
        while(iterator != NULL){
            length += 1;
            iterator = iterator->next;
        }
        //cout<<length;
        int middle = length/2+1;
        length = 1;
        ListNode* NewNode = new ListNode;
        while(head != NULL){
            if(length<middle){
                length += 1;
                head = head->next;
            }
            else{
                length +=1;
                NewNode->val = head->val;
                NewNode->next = head->next;
                break;
            }
        }
        return NewNode;
    }
};
