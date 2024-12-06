#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

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



    Node * current = head;
    
    while(current != nullptr){
        cout << current-> data << endl;
        current = current-> next;
    }
}