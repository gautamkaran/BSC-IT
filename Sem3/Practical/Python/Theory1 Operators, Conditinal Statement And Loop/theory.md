<h1 style="text-align: center;">Theory</h1>

## Operators

Operators are symbols that perform operations on variables and values. They are the building blocks for calculations, decision-making, and logic within programming. Operators are classified into different types based on their functionality:

### 1. **Arithmetic Operators**

These operators are used for mathematical calculations:

- `+` : Addition
- `-` : Subtraction
- `*` : Multiplication
- `/` : Division
- `%` : Modulus (remainder of division)

### 2. **Relational (Comparison) Operators**

These operators compare two values and return a boolean (`true`/`false`):

- `==` : Equal to
- `!=` : Not equal to
- `>` : Greater than
- `<` : Less than
- `>=` : Greater than or equal to
- `<=` : Less than or equal to

### 3. **Logical Operators**

Logical operators are used to perform logical operations:

- `&&` : Logical AND (true if both conditions are true)
- `||` : Logical OR (true if at least one condition is true)
- `!` : Logical NOT (inverts the boolean value)

### 4. **Assignment Operators**

These operators assign values to variables:

- `=` : Assign
- `+=` : Add and assign
- `-=` : Subtract and assign

### 5. **Increment/Decrement Operators**

- `++` : Increment (increase by 1)
- `--` : Decrement (decrease by 1)

## Conditional Statements

Conditional statements are used to execute specific blocks of code based on certain conditions. They help control the flow of a program by making decisions.

### 1. **if Statement**

Executes a block of code if a specified condition is true.

```python
if condition:
    # code to execute if condition is true
```

### 2. **if-else Statement**

Executes one block of code if the condition is true, and another block if it is false.

```python
if condition:
  # code if true
else:
  # code if false
```

### 3. **else if (elif) Statement**

Provides additional conditions to check if the previous conditions are false.

```python
if condition1:
    # code if condition1 is true
elif condition2:
    # code if condition2 is true
else:
    # code if all conditions are false
```

## Loops

Loops allow you to execute a block of code repeatedly as long as a specific condition is met. They reduce redundancy in code and automate repetitive tasks.

### 1. **for Loop**

Executes a block of code a fixed number of times.

```python
for i in range(start, stop, step):
    # code to execute in each iteration
```

### 2. while Loop

Repeats a block of code as long as a given condition is true.

```python
while condition:
    # code to execute as long as condition is true

```

### Loop Control Statements:

- `break`: Exits the loop prematurely.
- `continue`: Skips the current iteration and moves tp the next.
- `pass`: A null operation placeholder; it does nothing.
