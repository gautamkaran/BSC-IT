#include <iostream>
using namespace std;

void ShowAllElementInArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
}

void Searching(int array[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (target == array[i])
    {
      cout << target << " Element is found";
      return;
    }
  }
  cout << target << " Element is not found!";
}

int Reversing(int array[], int size)
{
  int start = 0, end = size - 1;
  while (start < end)
  {
    swap(array[start], array[end]);
    start++;
    end--;
  }
  cout << "Array is Revered" << endl;
}

int Sorting(int array[], int size)
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
  int choice;
  int array[5] = {3, 4, 1, 7, 5};
  int size = 5;
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
      ShowAllElementInArray(array, size);
      break;
    case 2:
      cout << "Searching..." << endl;
      int element;
      cout << "Enter element to find: ";
      cin >> element;
      Searching(array, size, element);
      break;
    case 3:
      cout << "Sorting.." << endl;
      Sorting(array, size);
      break;
    case 4:
      cout << "Reversing.." << endl;
      Reversing(array, size);
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

