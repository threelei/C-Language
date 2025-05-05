#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
int main(){


    Node* newList;
    Node* dumpy = new Node(0);
    Node* dumpy_head = head;
    dumpy->next = newList;
    while(head){
        newList.val = head->val;
        newList.next = new Node(0);

        newList = newList->next;
        head = head->next;
    }
    head = dumpy_head;
    newList = dumpy->next;
    while(head){
        int sub = head->random - dumpy_head;
        newList->random = dumpy->next + sub;

        newList = newList->next;
        head = head->next;
    }
}