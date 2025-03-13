#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class SinglyLinkedList {
public:
    Node* head;

    SinglyLinkedList() : head(nullptr) {}

    void insertAtHead(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void deleteAtIndex(int index) {
        if (!head || index < 0) {
            return;
        }

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;
        int count = 0;

        while (current && count < index) {
            prev = current;
            current = current->next;
            count++;
        }

        if (!current) {
            return;
        }

        prev->next = current->next;
        delete current;
    }

    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    int Q;
    std::cin >> Q;

    SinglyLinkedList linkedList;

    for (int i = 0; i < Q; ++i) {
        int X, V;
        std::cin >> X >> V;

        if (X == 0) {
            linkedList.insertAtHead(V);
        } else if (X == 1) {
            linkedList.insertAtTail(V);
        } else if (X == 2) {
            linkedList.deleteAtIndex(V);
        }

        linkedList.display();
    }

    return 0;
}
