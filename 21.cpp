//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* head = new ListNode();
        while(head!=NULL){
            if(list1->val<list2->val){
                head->val = list1->val;
                list1 = list1->next;
            }
            else{
                head->val = list2->val;
                list2 = list2->next;
            }
            head = head->next;
        }

        return head;
    }
};
int main()
{
    ListNode* list1 = new ListNode(1);
    ListNode* list2 = new ListNode(2);
    Solution s;
    s.mergeTwoLists(list1,list2);
    return 0;
}