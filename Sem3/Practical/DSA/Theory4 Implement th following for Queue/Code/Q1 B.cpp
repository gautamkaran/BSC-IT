/**
 * Write a program to implement the concept of Circular Queue
 */
#include <iostream>
using namespace std;

#define MAX 5  // Maximum size of the Circular Queue

class CircularQueue {
private:
    int arr[MAX];  // Array to hold the queue elements
    int front, rear;  // Front and rear pointers

public:
    CircularQueue() {
        front = -1;  // Initialize front to -1 (queue is empty)
        rear = -1;   // Initialize rear to -1 (queue is empty)
    }

    // Function to check if the queue is full
    bool isFull() {
        return (front == (rear + 1) % MAX);
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Function to insert (enqueue) an element into the queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << " into the queue.\n";
        } else {
            if (front == -1) {  // If the queue is empty, set front to 0
                front = 0;
            }
            rear = (rear + 1) % MAX;  // Circular increment of the rear pointer
            arr[rear] = value;
            cout << value << " inserted into the queue.\n";
        }
    }

    // Function to delete (dequeue) an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! No elements to dequeue.\n";
        } else {
            cout << "Removed element: " << arr[front] << endl;
            if (front == rear) {  // If there is only one element
                front = rear = -1;  // Reset the queue to empty state
            } else {
                front = (front + 1) % MAX;  // Circular increment of the front pointer
            }
        }
    }

    // Function to display the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
        } else {
            cout << "Queue elements: ";
            int i = front;
            while (i != rear) {
                cout << arr[i] << " ";
                i = (i + 1) % MAX;  // Circular increment
            }
            cout << arr[rear] << endl;  // Display the last element
        }
    }
};

// Main function to handle menu-driven operations
int main() {
    CircularQueue q;
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
