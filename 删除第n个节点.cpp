// Created on iPad.

#include <iostream>
using namespace std;
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dum(0,head);
    ListNode* fast=&dum;
    while(n){
      fast=fast->next;
      --n;
    }
    ListNode* slow=&dum;
    while(fast->next!=nullptr){
      fast=fast->next;
      slow=slow->next;
    }
    ListNode* temp=slow->next;
    slow->next=temp->next;
    delete(temp);

    return dum.next;    
    }
};

int main() {
    cout << "Hello World!";
    return 0;
}