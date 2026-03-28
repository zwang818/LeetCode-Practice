// Created on iPad.

#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> need;
        ListNode* list1=headA;
        ListNode* list2=headB;
        while(list1!=nullptr){
          need.insert(list1);
          list1=list1->next;
        }
        while(list2!=nullptr){
          if(need.count(list2)){
            return list2;
          }
          list2=list2->next;
        }
        return nullptr;
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}