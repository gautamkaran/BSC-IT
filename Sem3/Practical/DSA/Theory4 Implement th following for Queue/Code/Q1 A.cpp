#include <iostream>
using namespace std;

#define MAX 100  // Maximum size of the queue

class Queue {
private:
    int arr[MAX];  // Array to hold the queue elements
    int front, rear;  // Front and rear pointers

public:
    Queue() {
        front = -1;  // Initialize front to -1 (queue is empty)
        rear = -1;   // Initialize rear to -1 (queue is empty)
    }

    // Insert (Enqueue) operation to add an element to the queue
    void enqueue(int value) {
        if (rear >= MAX - 1) {
            cout << "Queue Overflow! Cannot insert " << value << " into the queue.\n";
        } else {
            if (front == -1) {  // If the queue is empty, set front to 0
                front = 0;
            }
            rear++;
            arr[rear] = value;
            cout << value << " inserted into the queue.\n";
        }
    }

    // Delete (Dequeue) operation to remove an element from the queue
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! No elements to dequeue.\n";
        } else {
            cout << "Removed element: " << arr[front] << endl;
            front++;
        }
    }

    // Display operation to show the elements of the queue
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty.\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

// Main function to handle menu-driven operations
int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert (Enqueue)\n";
        cout << "2. Delete (Dequeue)\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
