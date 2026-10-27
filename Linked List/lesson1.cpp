#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

// Function to insert at the front
void insertAtFront(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int main() {
    Node* head = nullptr; // Start with an empty list

    // Insert elements
    insertAtFront(head, 30);
    insertAtFront(head, 20);
    insertAtFront(head, 10);

    cout << "Linked List: ";
    printList(head); // Output: 10 -> 20 -> 30 -> nullptr

    return 0;
}