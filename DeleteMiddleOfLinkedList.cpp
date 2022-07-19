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
    ListNode* deleteMiddle(ListNode* head) {
        int length = 0;
        ListNode* iterator = new ListNode;
        ListNode* iterator2 = new ListNode;
        iterator->val = head->val;
        iterator2->val = head->val;
        iterator->next = head->next;
        iterator2->next = head->next;
        while(iterator != NULL){
            length += 1;
            iterator = iterator->next;
        }
        int middle = length/2;
        cout<<length;
        if(length<4){
            if(length==1){
                head = NULL;
            }
            else if(length ==2){
                head->next = NULL;
            }
            else{
                head->next = head->next->next;
            }
        }
        else{
            length = 0;
            while(iterator2 != NULL){
                if(length<middle-1){
                    iterator2 = iterator2->next;
                    length += 1;
                }
                else{
                    iterator2->next = iterator2->next->next;
                    break;
                }
            }
        }
        return head;        
    }
};
