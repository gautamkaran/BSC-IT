
# Theory7: Exception Handling in Python

## Introduction

Exception handling is a mechanism in Python that allows developers to manage and respond to runtime errors effectively. Instead of letting a program crash when an error occurs, exception handling enables the program to catch the error and handle it gracefully, providing meaningful feedback and maintaining the program's stability.

## Key Concepts

### 1. **Exception**
An exception is an error that occurs during the execution of a program. When an exception is raised, the normal flow of the program is interrupted.

**Common Examples of Exceptions**:
- `ZeroDivisionError`: Raised when dividing by zero.
- `ValueError`: Raised when an invalid value is given (e.g., non-integer input).
- `TypeError`: Raised when an operation is performed on incompatible types.
- `FileNotFoundError`: Raised when a file cannot be found.

### 2. **Try and Except Blocks**
The `try` block contains code that may raise an exception. The `except` block catches and handles the exception.

```python
try:
    number = int(input("Enter a number: "))
    result = 10 / number
    print(f"Result: {result}")
except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")
```

**Output**:
```
Enter a number: 0
Error: Division by zero is not allowed.
```

### 3. **Else Block**
The `else` block executes if no exceptions are raised in the `try` block.

```python
try:
    number = int(input("Enter a number: "))
    result = 10 / number
except ZeroDivisionError:
    print("Cannot divide by zero.")
else:
    print(f"Result: {result}")
```

### 4. **Finally Block**
The `finally` block executes regardless of whether an exception occurred or not. It is useful for cleanup actions like closing files.

```python
try:
    file = open("example.txt", "r")
    data = file.read()
except FileNotFoundError:
    print("File not found.")
finally:
    print("Closing the file.")
    file.close()
```

### 5. **Raising Exceptions**
You can raise exceptions manually using the `raise` keyword. This is useful for handling specific conditions not covered by built-in exceptions.

```python
def check_positive(number):
    if number < 0:
        raise ValueError("The number must be positive.")
    
try:
    check_positive(-5)
except ValueError as e:
    print(e)
```

**Output**:
```
The number must be positive.
```

### 6. **Custom Exceptions**
Custom exceptions can be defined by creating a new class that inherits from the built-in `Exception` class.

```python
class NegativeNumberError(Exception):
    pass

try:
    num = int(input("Enter a positive number: "))
    if num < 0:
        raise NegativeNumberError("Negative numbers are not allowed.")
except NegativeNumberError as e:
    print(e)
```