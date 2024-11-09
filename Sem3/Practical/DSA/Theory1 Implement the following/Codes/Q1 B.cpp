#include <iostream>
using namespace std;

// Function to read an array
void readArray(int arr[], int &size) {
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++) cin >> arr[i];
}

// Bubble Sort Function
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swapping elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display the sorted array
void displayArray(int arr[], int size) {
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

// Menu-driven function
void menu() {
    int arr[50], size = 0, choice;
    while (true) {
        cout << "\nMenu:\n1. Enter Array\n2. Sort Array\n3. Display Sorted Array\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                readArray(arr, size);
                break;
            case 2:
                if (size == 0) {
                    cout << "Array is empty. Please enter the array first.\n";
                } else {
                    bubbleSort(arr, size);
                    cout << "Array has been sorted.\n";
                }
                break;
            case 3:
                if (size == 0) {
                    cout << "Array is empty. Please enter the array first.\n";
                } else {
                    displayArray(arr, size);
                }
                break;
            case 4:
                cout << "Exiting the program.\n";
                return;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}

// Main function
int main() {
    menu();
    return 0;
}
