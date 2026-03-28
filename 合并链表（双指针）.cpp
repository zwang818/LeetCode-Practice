// Created on iPad.

#include <iostream>
using namespace std;
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode* l1=list1;
      ListNode* l2=list2;
      ListNode dum(0);
      ListNode* current=&dum;
      while(l1!=nullptr&&l2!=nullptr){
        if(l1->val<=l2->val){
          current->next=l1;
          l1=l1->next;
          current=current->next;
        }
        else{
          current->next=l2;
          l2=l2->next;
          current=current->next;
        }
      }
      if(l1==nullptr)current->next=l2;
      else current->next=l1;

      return dum.next;
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}