#include <iostream>
using namespace std;

// Function to perform the Tower of Hanoi operation
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base case: If there's only one disk, just move it from source to destination
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary, so they are out of the way
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;  // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;

    // Call the Tower of Hanoi function with source as 'A', auxiliary as 'B', and destination as 'C'
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}

