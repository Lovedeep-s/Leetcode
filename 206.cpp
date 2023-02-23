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
auto main(){
    ListNode* head = new ListNode(1);
    if (head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* p = NULL;
        ListNode* h = head;
        ListNode* n = h->next;
        while (h!=NULL)
        {
            h->next = p;
            p = h;
            h = n;
            if (n!=NULL)
            {
                n = n->next;
            }
            
        }
        return p;
        

}