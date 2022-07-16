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
    vector<int> getNumber(ListNode* l1){
        vector<int> vect;
        while(l1!=NULL)
        {
            vect.push_back(l1->val);
            l1 = l1->next;
        }
        return vect;
    }
    vector<int> sumTwoLongNumber(vector<int> vect1, vector<int> vect2){
        //implement the simple addition technique using two vectors
        int m = vect1.size();
        int n = vect2.size();
        int min_length = min(m,n);
        int max_length = max(m,n);
        vector<int> biggie;
        if(m==max_length){
            biggie = vect1;
        }
        else{
            biggie = vect2;
        }
        vector<int>sum;
        int overhead = 0;
        for(int i = 0; i<min_length;i++)
        {
            int curr_sum=0;
            int curr_m = vect1[i];
            int curr_n = vect2[i];
            curr_sum = curr_m + curr_n+overhead;
            overhead = curr_sum/10;
            curr_sum = curr_sum%10;
            sum.push_back(curr_sum);
        }
        for(int i = min_length;i<max_length;i++)
        {
            int curr_sum = 0;
            curr_sum = biggie[i]+overhead;
            overhead = curr_sum/10;
            curr_sum = curr_sum%10;
            sum.push_back(curr_sum);
        }
        if(overhead>0){
            sum.push_back(overhead);
        }
        return sum;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> vect1 = getNumber(l1);
        vector<int> vect2 = getNumber(l2);
        vector<int> sum_of_numbers = sumTwoLongNumber(vect1,vect2);
        ListNode* result = new ListNode();
        result->val = NULL;
        result->next = NULL;
        int total_length = sum_of_numbers.size();
        while(sum_of_numbers.size()>0)
        {
            ListNode* head = new ListNode();
            head->val = sum_of_numbers.back();
            sum_of_numbers.pop_back();
            head->next = result->next;
            result->next = head;
        }
        if(total_length>0){
            result = result->next;   
        }
        return result;
    }
};
