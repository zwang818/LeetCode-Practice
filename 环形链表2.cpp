// Created on iPad.

#include <iostream>
#include <unorderd_map>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> window;
        ListNode* current=head;
        while(current!=nullptr){
          if(window.count(current)){
            return current;
          }
          window.insert(current);
          current=current->next;
        }
        return nullptr;
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}