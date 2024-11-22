#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    // Outer loop to go through the entire array
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume the current index is the minimum
        
        // Inner loop to find the smallest element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update the minimum index if a smaller element is found
            }
        }

        // Swap the found minimum element with the first unsorted element
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
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

    // Call selectionSort function to sort the array
    selectionSort(arr, n);

    // Display the sorted array
    cout << "Sorted array: ";
    displayArray(arr, n);

    return 0;
}
