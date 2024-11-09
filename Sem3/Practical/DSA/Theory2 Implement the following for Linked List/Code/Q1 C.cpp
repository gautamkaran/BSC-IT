/**
 * Write a program to create double linked list and sort the elements in the linked
 * list.
 */
#include <iostream>
using namespace std;

// Node structure for the doubly linked list
struct Node
{
  int data;
  Node *prev;
  Node *next;
};

// Function to create a new node
Node *createNode(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->prev = nullptr;
  newNode->next = nullptr;
  return newNode;
}

// Function to insert a new node at the end of the list
void insertAtEnd(Node *&head, int data)
{
  Node *newNode = createNode(data);
  if (head == nullptr)
  {
    head = newNode;
  }
  else
  {
    Node *temp = head;
    while (temp->next != nullptr)
    {
      temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
  }
}

// Function to display the doubly linked list
void displayList(Node *head)
{
  cout << "Doubly Linked List: ";
  while (head != nullptr)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

// Function to sort the doubly linked list using Bubble Sort
void sortList(Node *head)
{
  if (head == nullptr)
    return;
  bool swapped;
  Node *ptr;
  Node *last = nullptr;

  do
  {
    swapped = false;
    ptr = head;

    // Traverse the list and swap adjacent elements if needed
    while (ptr->next != last)
    {
      if (ptr->data > ptr->next->data)
      {
        // Swap the data of the two nodes
        int temp = ptr->data;
        ptr->data = ptr->next->data;
        ptr->next->data = temp;
        swapped = true;
      }
      ptr = ptr->next;
    }
    last = ptr; // Update the last sorted element
  } while (swapped);
}

// Main function
int main()
{
  Node *head = nullptr;
  int choice, data;

  while (true)
  {
    cout << "\nMenu:\n";
    cout << "1. Insert element\n";
    cout << "2. Display list\n";
    cout << "3. Sort the list\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Enter element to insert: ";
      cin >> data;
      insertAtEnd(head, data);
      break;
    case 2:
      displayList(head);
      break;
    case 3:
      cout << "Sorting the list...\n";
      sortList(head);
      cout << "List sorted.\n";
      break;
    case 4:
      cout << "Exiting the program.\n";
      return 0;
    default:
      cout << "Invalid choice. Please try again.\n";
    }
  }
}
