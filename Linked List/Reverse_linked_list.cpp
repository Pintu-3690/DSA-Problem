#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor
    node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to reverse the linked list
node* reverse(node* head) {
    node* curr = head;
    node* prev = nullptr;
    node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;  // Store next node
        curr->next = prev;  // Reverse the link
        prev = curr;        // Move prev one step forward
        curr = next;        // Move curr one step forward
    }
    return prev; // New head of the reversed list
}

// Function to print the linked list
void printList(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);

    head = reverse(head);

    printList(head);

    return 0;
}