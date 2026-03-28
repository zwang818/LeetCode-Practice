// Created on iPad.

#include <iostream>
using namespace std;
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        //终止条件
        if(head==nullptr||head->next==nullptr){
          return head;
        }

        //准备工作
        ListNode* second=head->next;

        //递归调用
        head->next=swapPairs(second->next);

        //本级逻辑
        second->next=head;

        return second;
    }
};
int main() {
    cout << "Hello World!";
    return 0;
}