#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};


class Queue {
private:
    Node* front;
    Node* rear;

public:
    
    Queue() {
        front = rear = NULL;
    }

    
    void enqueue(int x) {
        Node* temp = new Node(x);

        if (rear == NULL) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }

        cout << x << " inserted into queue\n";
    }

 
    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;
        cout << temp->data << " removed from queue\n";

        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
    }

    // Peek operation
    int peek() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    // Check if empty
    bool isEmpty() {
        return front == NULL;
    }

    // Display queue
    void display() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;
        cout << "Queue: ";

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            cout << "Front element: " << q.peek() << endl;
            break;

        case 4:
            q.display();
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}