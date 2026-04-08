// Created on iPad.
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        //终止条件
        ListNode* check=head;
        for(int i=0;i<k;i++){
            if(!check)return head;
            check=check->next;
        }

        //本级逻辑
        ListNode* pre=nullptr;
        ListNode* cur=head;
        for(int i=0;i<k;i++){
            ListNode* temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }

        //递归
        head->next=reverseKGroup(cur,k);
        return pre;
    }
};
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!";
    return 0;
}