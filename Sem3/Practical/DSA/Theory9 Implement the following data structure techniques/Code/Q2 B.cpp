#include <iostream>
using namespace std;

class HashTable {
    int* table;
    int size;

public:
    HashTable(int s) : size(s) {
        table = new int[size];
        for (int i = 0; i < size; i++) table[i] = -1;  // Initialize with -1 (empty)
    }

    // Hash function
    int hashFunction(int key) {
        return key % size;
    }

    // Insert key into the hash table
    void insert(int key) {
        int index = hashFunction(key);
        int originalIndex = index;

        while (table[index] != -1) {  // Linear probing
            index = (index + 1) % size;
            if (index == originalIndex) {
                cout << "Hash table is full!" << endl;
                return;
            }
        }
        table[index] = key;
    }

    // Search for a key
    bool search(int key) {
        int index = hashFunction(key);
        int originalIndex = index;

        while (table[index] != -1) {
            if (table[index] == key) return true;
            index = (index + 1) % size;
            if (index == originalIndex) break;
        }
        return false;
    }

    // Delete a key
    void deleteKey(int key) {
        int index = hashFunction(key);
        int originalIndex = index;

        while (table[index] != -1) {
            if (table[index] == key) {
                table[index] = -1;
                return;
            }
            index = (index + 1) % size;
            if (index == originalIndex) break;
        }
    }

    // Display the hash table
    void display() {
        for (int i = 0; i < size; i++)
            if (table[i] != -1)
                cout << i << " --> " << table[i] << endl;
            else
                cout << i << " --> Empty" << endl;
    }

    ~HashTable() {
        delete[] table;
    }
};

int main() {
    HashTable ht(10);
    ht.insert(10);
    ht.insert(20);
    ht.insert(30);
    ht.insert(25);  // Collision with key 10, linear probing will occur

    ht.display();

    if (ht.search(20))
        cout << "20 found" << endl;
    else
        cout << "20 not found" << endl;

    ht.deleteKey(25);
    ht.display();

    return 0;
}
