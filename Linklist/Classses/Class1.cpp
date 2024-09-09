#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {
        this->next = nullptr;
    }

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void Print_LL(Node *head) {
    Node *temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // To print a newline after the linked list
}

int get_Length(Node *head) {
    int length = 0;

    Node *temp = head;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }

    return length;
}

void insert_athead(Node* &head, int data) {
    // Create a new node
    Node *newNode = new Node(data);

    // Attach new node to the head
    newNode->next = head;

    // Update head
    head = newNode;
}

void free_LinkedList(Node* &head) {
    Node *temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node *first = new Node(10);
    Node *second = new Node(20);

    first->next = second;
    Node *head = first;

    Print_LL(head);
    int ans = get_Length(head);

    cout << "The length of the linked list is = " << ans << endl;

    insert_athead(head, 6);

    cout << "After inserting at the head, the linked list is: " << endl;
    Print_LL(head);

    ans = get_Length(head);
    cout << "The length of the linked list is = " << ans << endl;

    // Free the allocated memory
    free_LinkedList(head);

    return 0;
}
