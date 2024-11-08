<h1 style="text-align: center;">Theory</h1>

## Introduction
A **list** in Python is a collection of items or elements that are ordered, mutable, and allow duplicate values. Lists are one of the most versatile and commonly used data types in Python, enabling developers to store multiple items in a single variable. The elements of a list can be of any data type, including integers, floats, strings, or even other lists.

## List Characteristics
- **Ordered**: Lists maintain the order of the elements. When elements are added to the list, they are appended in a specific sequence, and that order remains the same unless explicitly changed.
- **Mutable**: This means the elements of a list can be changed after the list is created. You can add, remove, or modify the elements of a list freely.
- **Allows Duplicates**: Lists can store duplicate elements. This is unlike sets, which require all elements to be unique.

## Creating a List
Lists are created by placing elements inside square brackets (`[]`), separated by commas.

```python
# Example of a list:
my_list = [1, 2, 3, "apple", 4.5]
```
## Accessing List Elements
Elements in a list are accessed using indexing. Python uses zero-based indexing, so the first element of a list is accessed with index `0`.

```python
my_list[0]  # Outputs: 1
```

Negative indexing can be used to access elements from the end of the list.
```python
my_list[-1]  # Outputs: 4.5
```
## List Operations
Several operations can be performed on lists:
1. Adding Elements
- `append()`:  Adds an element to the end of the list.
- ` insert(index, element)`: Adds an element at a specific position. 
- `extend()`:Adds all elements of another list to the end of the current list.
```python
my_list.append("banana")
my_list.insert(1, "orange")
my_list.extend([5, 6])
```

1. Removing Elements:
- `remove(element)`: Removes the first occurrence of the specified element.
- `pop(index)`: Removes and returns the element at the specified index. If no index is specified, it removes the last element.
- `clear()`: Removes all elements from the lis
```python
my_list.remove("apple")
my_list.pop(2)
```
3. Modifying Elements:
You can modify a list element by directly assigning a new value to a specific index.

```python
my_list[0] = "pear"
```
## List Slicing
Slicing allows you to access a sublist from the original list. It is done by specifying a range of indices:
```python
my_list[1:4]  # Outputs elements from index 1 to 3
```

## List Comprehensions
List comprehensions provide a concise way to create lists. They consist of brackets containing an expression followed by a for clause.
squared_list = [x**2 for x in range(5)]  # Outputs: [0, 1, 4, 9, 16]

## Common List Methods
- `len(list)`: Returns the number of elements in the list.
- `min(list) and max(list)`: Return the smallest and largest elements in the list.
- `list.index(element)`: Returns the index of the first occurrence of an element.
- `list.count(element)`: Returns the number of occurrences of an element.