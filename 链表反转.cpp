// Created on iPad.

#include <iostream>
#include <vector>
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
    ListNode* reverseList(ListNode* head) {
      ListNode* current=head;
      ListNode* pre=nullptr;
      while(current!=nullptr){
        ListNode* temp=current->next;
        current->next=pre;
        pre=current;
        current=temp;
      }
      return pre;  
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}