#include <iostream>
using namespace  std;
class node {
public:
    int data;
    node* next;
    node* prev;
    node(int d) {
        this->data = d;
        this ->next=nullptr;
        this->prev = nullptr;
    }


};

int main() {
    node* head = new node(10);
    head->next=new node(20);
    head->next->prev=head;
    //---NODE 2
    head->next->next=new node(30);
    head->next->next->prev=new node(-10);


    node* temp = head;
    while (temp != nullptr) {
        cout<<temp->data;
        if (temp != nullptr) {
            cout<<" <-> ";
        }
        temp = temp->next;
    }

    return 0;
}