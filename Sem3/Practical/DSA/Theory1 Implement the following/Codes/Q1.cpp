/**
 * Write a program to store the elements in 1-D array and perform the
 * operations like searching, sorting and reversing the elements. [Menu Driven]
 */

#include <iostream>
using namespace std;
int array[5] = {3, 4, 1, 7, 5};
int size = 5;

void ShowAllElementInArray()
{
  for (int i = 0; i < 5; i++)
  {
    cout << array[i] << " ";
  }
}

void Searching(int target)
{
  for (int i = 0; i < 5; i++)
  {
    if (target == array[i])
    {
      cout << target << " Element is found";
      return;
    }
  }
  cout << target << " Element is not found!";
}

int Reversing()
{
  int start = 0, end = 4;
  while (start < end)
  {
    swap(array[start], array[end]);
    start++;
    end--;
  }
  cout << "Array is Revered" << endl;
}

int Sorting()
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        swap(array[j], array[j + 1]);
      }
    }
  }
  cout << "Array Sorted successfully" << endl;
}

int main()
{
  cout << "\nWelcome to 1D Array Operation Program.\n";
  int choice;
  do
  {
    cout << "\n1. Show All Element\n2. Searching.\n3. Sorting\n4. Reversing\n5. Exit";
    cout << "\nEnter choice:- ";
    cin >> choice;

    cout << "\n----------------------------------------------\n";
    switch (choice)
    {
    case 1:
      cout << "Show All Element" << endl;
      ShowAllElementInArray();
      break;
    case 2:
      cout << "Searching..." << endl;
      int element;
      cout << "Enter element to find: ";
      cin >> element;
      Searching(element);
      break;
    case 3:
      cout << "Sorting.." << endl;
      Sorting();
      break;
    case 4:
      cout << "Reversing.." << endl;
      Reversing();
      break;
    case 5:
      cout << "Program exit successfully!";
      break;
    default:
      cout << "Invalid Choice, Plaese try again";
      break;
    }
    cout << "\n----------------------------------------------\n";
  } while (choice != 5);
}