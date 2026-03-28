// Created on iPad.

#include <iostream>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      if(list1==nullptr)return list2;
      else if(list2==nullptr)return list1;

      if(list1->val<=list2->val){
        list1->next=mergeTwoLists(list1->next,list2);
        return list1;
      }
      else{
        list2->next=mergeTwoLists(list2->next,list1);
        return list2;
      }
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}