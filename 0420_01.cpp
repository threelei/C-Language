#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
typedef struct ListNode {
    int val;
    ListNode *next;
    // ListNode() : val(0), next(nullptr) {};
    // ListNode(int x) : val(x), next(nullptr) {};
    ListNode(int x, ListNode *next) : val(x), next(next) {};
} ListNode;
int main(){
    ListNode* head = new ListNode{1, new ListNode{2, new ListNode{3, new ListNode{4, new ListNode{5, nullptr}}}}};
    if(head == nullptr){
        return 0;
    }
    ListNode dumpy{0, nullptr};
    dumpy.next = head->next ? head->next : head;
    ListNode* slow = head, *fast, *pre = nullptr;
    while(slow && slow->next){

        fast = slow->next;

        if(pre) {
            pre->next = fast;
        }
        slow->next = fast->next;
        fast->next = slow;

        pre = slow;

        slow = slow->next;

    }
    return 0; //head->next ? head-> next : head;
}