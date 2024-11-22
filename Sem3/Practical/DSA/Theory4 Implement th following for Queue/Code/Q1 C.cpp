#include <iostream>
using namespace std;

#define MAX 5  // Maximum size of the Deque

class Deque {
private:
    int arr[MAX];  // Array to hold the deque elements
    int front, rear;  // Front and rear pointers

public:
    Deque() {
        front = -1;  // Initialize front to -1 (empty deque)
        rear = -1;   // Initialize rear to -1 (empty deque)
    }

    // Function to check if the deque is full
    bool isFull() {
        return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
    }

    // Function to check if the deque is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Insert element at the front of the deque
    void insertFront(int value) {
        if (isFull()) {
            cout << "Deque Overflow! Cannot insert " << value << " at the front.\n";
        } else {
            if (front == -1) {  // If the deque is empty, both front and rear are set to 0
                front = rear = 0;
            } else if (front == 0) {
                front = MAX - 1;  // Wrap around if front is at the beginning of the array
            } else {
                front--;  // Decrement front to insert at the front
            }
            arr[front] = value;
            cout << value << " inserted at the front.\n";
        }
    }

    // Insert element at the rear of the deque
    void insertRear(int value) {
        if (isFull()) {
            cout << "Deque Overflow! Cannot insert " << value << " at the rear.\n";
        } else {
            if (front == -1) {  // If the deque is empty, both front and rear are set to 0
                front = rear = 0;
            } else if (rear == MAX - 1) {
                rear = 0;  // Wrap around if rear is at the end of the array
            } else {
                rear++;  // Increment rear to insert at the rear
            }
            arr[rear] = value;
            cout << value << " inserted at the rear.\n";
        }
    }

    // Delete element from the front of the deque
    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque Underflow! No elements to delete from the front.\n";
        } else {
            cout << "Removed element from the front: " << arr[front] << endl;
            if (front == rear) {  // If there is only one element, reset the deque to empty
                front = rear = -1;
            } else if (front == MAX - 1) {
                front = 0;  // Wrap around if front is at the end of the array
            } else {
                front++;  // Increment front to remove the element
            }
        }
    }

    // Delete element from the rear of the deque
    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque Underflow! No elements to delete from the rear.\n";
        } else {
            cout << "Removed element from the rear: " << arr[rear] << endl;
            if (front == rear) {  // If there is only one element, reset the deque to empty
                front = rear = -1;
            } else if (rear == 0) {
                rear = MAX - 1;  // Wrap around if rear is at the beginning of the array
            } else {
                rear--;  // Decrement rear to remove the element
            }
        }
    }

    // Display the elements of the deque
    void display() {
        if (isEmpty()) {
            cout << "Deque is empty.\n";
        } else {
            cout << "Deque elements: ";
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
    Deque dq;
    int choice, value;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at Rear\n";
        cout << "3. Delete from Front\n";
        cout << "4. Delete from Rear\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at the front: ";
                cin >> value;
                dq.insertFront(value);
                break;
            case 2:
                cout << "Enter value to insert at the rear: ";
                cin >> value;
                dq.insertRear(value);
                break;
            case 3:
                dq.deleteFront();
                break;
            case 4:
                dq.deleteRear();
                break;
            case 5:
                dq.display();
                break;
            case 6:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
