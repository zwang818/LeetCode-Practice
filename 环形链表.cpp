// Created on iPad.

#include <iostream>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* rabbit=head;
        ListNode* turtle=head;
        while(rabbit!=nullptr&&rabbit->next!=nullptr){
          rabbit=rabbit->next->next;
          turtle=turtle->next;
          if(rabbit==turtle){
            return true;
          }
        }
    return false;
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}