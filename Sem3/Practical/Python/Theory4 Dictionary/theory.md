# Python Dictionary: Theory and Overview

## Introduction
A **dictionary** in Python is an unordered, mutable collection of key-value pairs. It allows efficient retrieval of values based on a unique key. Unlike lists, which are indexed by a range of numbers, dictionaries are indexed by keys, which can be any immutable data type such as strings, numbers, or tuples.

## Characteristics of Dictionaries
- **Unordered**: Prior to Python 3.7, dictionaries were unordered collections. Starting with Python 3.7+, dictionaries maintain the insertion order of keys, meaning elements will appear in the order they were added.
- **Mutable**: Dictionaries are mutable, meaning you can change, add, or remove key-value pairs after the dictionary has been created.
- **Key-Value Pairs**: Each entry in a dictionary consists of a **key** and a **value**. Keys must be unique and immutable (strings, numbers, or tuples), while values can be of any data type (including lists, other dictionaries, etc.).
- **Fast Lookup**: Python dictionaries allow fast access to data. The average time complexity for lookups, insertions, and deletions in a dictionary is O(1), making it an efficient data structure for many use cases.

## Creating a Dictionary
Dictionaries are created by placing key-value pairs inside curly braces `{}`, separated by commas. Each key is separated from its corresponding value by a colon `:`.

```python
# Creating a simple dictionary
person = {
    "name": "Alice",
    "age": 25,
    "city": "New York"
}
``` 

In this example, "name", "age", and "city" are keys, while "Alice", 25, and "New York" are their corresponding values.

## Accessing Dictionary Elements
You can access values in a dictionary by using the corresponding key in square brackets.

```python
print(person["name"])  # Output: Alice
```
If you attempt to access a key that does not exist, a KeyError will be raised. To avoid this, you can use the get() method, which returns None (or a specified default value) if the key is not found.

```python
print(person.get("name"))  # Output: Alice
print(person.get("email", "Not found"))  # Output: Not found
```
## Modifying a Dictionary
Dictionaries are mutable, so you can add or change key-value pairs:

``` python
# Adding a new key-value pair
person["email"] = "alice@example.com"

# Modifying an existing value
person["age"] = 26
``` 
## Removing Elements
There are several ways to remove elements from a dictionary:

- `del statement`: Removes a key-value pair by key.
- `pop() method`: Removes a key and returns its value.
- `popitem() method`: Removes and returns the last inserted key-value pair (useful for working with insertion-order dictionaries in Python 3.7+).
- `clear() method`: Removes all items from the dictionary.
```python

# Remove a specific key-value pair
del person["city"]

# Remove and return a value by key
email = person.pop("email")

# Remove and return the last inserted key-value pair
last_item = person.popitem()

# Clear all items
person.clear()
```

## Dictionary Methods
Some common dictionary methods include:

- `keys()`: Returns a view object of all keys in the dictionary.
- `values()`: Returns a view object of all values.
- `items()`: Returns a view object of key-value pairs.
- `update()`: Updates a dictionary with the key-value pairs from another dictionary or an iterable of key-value pairs.
```python
# Example of using keys(), values(), and items()
keys = person.keys()
values = person.values()
items = person.items()

# Example of updating a dictionary
person.update({"age": 27, "city": "Los Angeles"})
```

## Iterating Over a Dictionary
You can iterate over a dictionary's keys, values, or both (key-value pairs):

```python
# Iterating over keys
for key in person:
    print(key)

# Iterating over values
for value in person.values():
    print(value)

# Iterating over key-value pairs
for key, value in person.items():
    print(f"{key}: {value}")
```