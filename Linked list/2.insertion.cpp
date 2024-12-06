// ### 2. **Insertion**
//    - **Description:** Adding a new node to the list.
//      - **Insertion at the beginning (head):** Add a node before the first node.
//      - **Insertion at the end (tail):** Add a node after the last node.
//      - **Insertion at a specific position:** Add a node after a specified position or node.
//    - **Example:** `insertAtBeginning()`, `insertAtEnd()`, `insertAtPosition()`

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * next;
    Node(int value): data(value),next(nullptr){}
};

void display(Node *current){
    while(current != nullptr){
        cout << current -> data << endl;
        current = current -> next;
    }
}

int main(){
    Node *head = new Node(5);
    Node *one = new Node(10);
    Node *two = new Node(15);
    Node *three = new Node(20);
    Node *four = new Node(25);

    head -> next = one;
    one -> next = two;
    two -> next = three;
    three -> next = four;


    display(head);
    return 0;
}