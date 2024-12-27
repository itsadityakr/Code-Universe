#include<iostream>
#define endl "\n"
using namespace std;

struct Node {
    int data;
    Node * next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* head = nullptr;

void insertAtEnd(int data){
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

void printLL(){
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

void updateValueAtIndex(int index, int newValue) {
    Node* current = head;
    int i = 0;

    while (current != nullptr) {
        if (i == index) {
            current->data = newValue;
            return;
        }
        current = current->next;
        i++;
    }

    cout <<-1<< endl;
}

int main() {

    insertAtEnd(4);
    insertAtEnd(6);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(7);

    printLL();
    updateValueAtIndex(2, 8);

    printLL();

    return 0;
}