/**
 * Write a program to implement bubble sort.
 */

#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Outer loop for number of passes
        for (int j = 0; j < n - i - 1; j++) {  // Inner loop for comparing elements
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];       // Temporary variable to hold the current element
                arr[j] = arr[j + 1];     // Swap the current element with the next element
                arr[j + 1] = temp;       // Assign the stored element to the next position
            }
        }
    }
}

// Function to display the array
void displayArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    
    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call bubbleSort function to sort the array
    bubbleSort(arr, n);

    // Display the sorted array
    cout << "Sorted array: ";
    displayArray(arr, n);

    return 0;
}
