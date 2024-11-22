#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node
{
  int data;
  Node *next;
};

// Function to create a new node
Node *createNode(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = nullptr;
  return newNode;
}


// Function to search an element in the linked list
bool searchElement(Node *head, int key)
{
  while (head != nullptr)
  {
    if (head->data == key)
    {
      return true;
    }
    head = head->next;
  }
  return false;
}

// Function to insert a new node at the end
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
  }
}








// Function to display the linked list
void displayList(Node *head)
{
  cout << "Linked List: ";
  while (head != nullptr)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

// Main function
int main()
{
  Node *head = nullptr;
  int choice, data, key;

  while (true)
  {
    cout << "\nMenu:\n";
    cout << "1. Insert element\n";
    cout << "2. Display list\n";
    cout << "3. Search for an element\n";
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
      cout << "Enter element to search: ";
      cin >> key;
      if (searchElement(head, key))
      {
        cout << "Element " << key << " found in the list.\n";
      }
      else
      {
        cout << "Element " << key << " not found in the list.\n";
      }
      break;
    case 4:
      cout << "Exiting the program.\n";
      return 0;
    default:
      cout << "Invalid choice. Please try again.\n";
    }
  }
}
