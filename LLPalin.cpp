#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode* head) {  
    stack<int> sta;
    int l = 0;
    for(ListNode* temp = head; temp->next != nullptr; temp = temp->next){
        ++l;
    }

    if(l%2 == 0){
        for(int i=0; i < l/2; i++){
            sta.push(head->val);
            head = head->next;
        }
        for(int i=0; i < l/2; i++){
            if(sta.top() != head->val){
                return false;
            }
            else{
                sta.pop();
                head = head->next;
            }
        }
        return true;
    }
    else{
        for(int i=0; i < l/2; i++){
            sta.push(head->val);
            head = head->next;
        }
        head = head->next;
        for(int i=0; i < l/2; i++){
            if(sta.top() != head->val){
                return false;
            }
            else{
                sta.pop();
                head = head->next;
            }
        }
        return true;
    }
}