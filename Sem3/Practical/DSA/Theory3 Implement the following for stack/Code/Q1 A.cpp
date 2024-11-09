/**
 * Write a program to implement the concept of Stack with Push, Pop, Display and 
 * Exit operations.
 */

#include <iostream>
using namespace std;

#define MAX 100  // Maximum size of the stack

class Stack {
private:
    int arr[MAX];  // Array to hold stack elements
    int top;       // Index of the top element

public:
    Stack() {
        top = -1;  // Initialize stack as empty
    }

    // Push operation to add an element to the stack
    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << " into the stack.\n";
        } else {
            arr[++top] = value;
            cout << value << " pushed into the stack.\n";
        }
    }

    // Pop operation to remove an element from the stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! No elements to pop.\n";
        } else {
            cout << "Popped element: " << arr[top--] << endl;
        }
    }

    // Display operation to print all elements in the stack
    void display() {
        if (top < 0) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;
    int choice, value;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
