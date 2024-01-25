#include <bits/stdc++.h>

using namespace std;

//use recursion only

class Node{
public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
private:
};

Node* head=nullptr;

void insert_at_head(int x){
    Node* new_node = new Node(x);
    new_node->next = head;
    head = new_node;
}

void print_ll(){
    Node* current = head;
    while(current!=nullptr){
        cout << "| " << current->data << " |";
        current = current->next;
    }
    cout << endl;
}

//----------don't modify before this point----------------
void reverse_ll(Node* curr){
    //add your code here
    if(curr->next==nullptr){
        head = curr;
        return;
    }
    Node* first = curr;
    reverse_ll(curr->next);
    Node* second = first->next;
    second->next = first;
    first->next = nullptr;
}
//----------don't modify beyond this point----------------


int main(){
    Node* curr = new Node(5);
    head = curr;
    insert_at_head(4);
    insert_at_head(3);
    insert_at_head(2);
    insert_at_head(1);
    cout << "Before reversing: " << endl;
    print_ll();
    reverse_ll(head);
    cout << "After reversing: " << endl;
    print_ll();   
    return 1;
}