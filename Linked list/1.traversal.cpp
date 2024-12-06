// ### 1. **Traversal**
//    - **Description:** Visiting each node of the linked list from head to tail to access or print the data.
//    - **Operation:** Start from the head and iterate over each node until the end (`nullptr`).
//    - **Example:** `printList()` function to display the list.

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void display(Node *current){
    cout << "Display all Element " <<endl;
    while(current != nullptr){
        cout << current -> data << endl;
        current = current->next;
    }
    cout << endl;
}

void deletelist(Node * current){
    while(current != nullptr){
        Node * next = current ->next;
        delete current;
        current = next;
    }
}

int main(){
    Node *head = new Node();
    Node *one = new Node();
    Node *two = new Node();
    Node *three = new Node();
    Node *four = new Node();

    head -> data = 5;
    head -> next = one;

    one-> data = 10;
    one-> next = two;

    two-> data = 20;
    two-> next = three;

    three-> data = 30;
    three-> next = four;

    four-> data = 40;
    four-> next = nullptr;

    display(head);
    deletelist(head);

    return 0;
}