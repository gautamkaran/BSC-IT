#include <iostream>
using namespace std;

// Function to perform Sequential Search
int sequentialSearch(int arr[], int n, int target) {
    // Loop through the array to find the target element
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if the element is found
        }
    }
    return -1;  // Return -1 if the element is not found
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
    int n, target;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to search for
    cout << "Enter the element to search for: ";
    cin >> target;

    // Perform Sequential Search
    int index = sequentialSearch(arr, n, target);

    // Output the result
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
