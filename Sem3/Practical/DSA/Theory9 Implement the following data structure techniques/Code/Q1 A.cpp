/**
 * Write a program to implement the collision technique.
 */
#include <iostream>
#include <list>
using namespace std;

// Hash table size
const int TABLE_SIZE = 10;

// HashTable class to handle collisions using chaining
class HashTable {
    // Array of linked lists (buckets)
    list<int> table[TABLE_SIZE];

public:
    // Hash function to map values to key
    int hashFunction(int key) {
        return key % TABLE_SIZE;
    }

    // Function to insert a key into the hash table
    void insert(int key) {
        int index = hashFunction(key);  // Find the hash index
        table[index].push_back(key);     // Insert key into the linked list at the index
    }

    // Function to delete a key from the hash table
    void remove(int key) {
        int index = hashFunction(key);
        // Find and remove the key from the linked list at the index
        table[index].remove(key);
    }

    // Function to search for a key in the hash table
    bool search(int key) {
        int index = hashFunction(key);
        // Search for the key in the linked list at the hash index
        for (int item : table[index]) {
            if (item == key) {
                return true;
            }
        }
        return false;
    }

    // Function to display the hash table
    void display() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << "Bucket " << i << ": ";
            for (int item : table[i]) {
                cout << item << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable ht;
    int choice, key;

    while (true) {
        // Display menu
        cout << "Menu:\n";
        cout << "1. Insert key\n";
        cout << "2. Remove key\n";
        cout << "3. Search key\n";
        cout << "4. Display hash table\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter key to insert: ";
                cin >> key;
                ht.insert(key);
                break;

            case 2:
                cout << "Enter key to remove: ";
                cin >> key;
                ht.remove(key);
                break;

            case 3:
                cout << "Enter key to search: ";
                cin >> key;
                if (ht.search(key)) {
                    cout << "Key found in hash table.\n";
                } else {
                    cout << "Key not found.\n";
                }
                break;

            case 4:
                ht.display();
                break;

            case 5:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
