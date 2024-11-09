/**
 * Write a program to insert the element into maximum heap.
 */
#include <iostream>
#include <vector>
using namespace std;

// Function to maintain the max-heap property by "heapifying" up
void heapifyUp(vector<int>& heap, int index) {
    // While the element is not the root and is greater than its parent
    while (index > 0) {
        int parent = (index - 1) / 2; // Calculate the index of the parent

        // If the current element is greater than the parent, swap them
        if (heap[index] > heap[parent]) {
            swap(heap[index], heap[parent]);
            index = parent;  // Move the index to the parent's position
        } else {
            break;  // Heap property is satisfied, exit the loop
        }
    }
}

// Function to insert an element into the max-heap
void insertMaxHeap(vector<int>& heap, int value) {
    // Add the new element at the end of the heap
    heap.push_back(value);
    
    // Call heapifyUp to ensure the max-heap property is maintained
    heapifyUp(heap, heap.size() - 1);
}

// Function to display the elements of the heap
void displayHeap(const vector<int>& heap) {
    cout << "Heap elements: ";
    for (int i = 0; i < heap.size(); i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> maxHeap;  // Initialize an empty max-heap

    int n, value;

    // Input the number of elements to be inserted into the heap
    cout << "Enter the number of elements to insert into the heap: ";
    cin >> n;

    // Insert elements into the max heap
    for (int i = 0; i < n; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> value;
        insertMaxHeap(maxHeap, value);  // Insert element and maintain heap property
    }

    // Display the max heap
    displayHeap(maxHeap);

    return 0;
}
