#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }

    static bool searchKey(Node* head, int key) {
        if (head == nullptr) {
            return false;
        }
        if (head->data == key) {
            return true;
        }
        return searchKey(head->next, key);
    }
};

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int key = 4;

    if (Node::searchKey(head, key)) {
        cout << "TRUE\n";
    } else {
        cout << "FALSE\n";
    }

    // Clean up heap memory
    Node* temp = head;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}