## Python QB

1.  **List in python are mutable. Justify**  
    [Answer]

    In Python, lists are considered **mutable** data structures, meaning that their content can be changed after they are created. This mutability provides several advantages and functionalities, which can be demonstrated through various operations:

    1. Modifying Elements  
       You can change the value of an element in a list using its index. For example:

       ```python
       my_list = [1, 2, 3, 4]
       my_list[2] = 10  # Change the third element
       print(my_list)  # Output: [1, 2, 10, 4]
       ```

    2. Adding Elements  
       Lists allow you to add new elements using methods like append() and insert(). For example:

       ```python
       my_list.append(5)  # Adds 5 to the end of the list
       print(my_list)  # Output: [1, 2, 10, 4, 5]

       my_list.insert(1, 20)  # Inserts 20 at index 1
       print(my_list)  # Output: [1, 20, 2, 10, 4, 5]
       ```

    3. Removing Elements  
       You can also remove elements from a list using methods like remove() and pop(). For example:

       ```python
       my_list.remove(10)  # Removes the first occurrence of 10
       print(my_list)  # Output: [1, 20, 2, 4, 5]

       popped_element = my_list.pop()  # Removes and returns the last element
       print(popped_element)  # Output: 5
       print(my_list)  # Output: [1, 20, 2, 4]
       ```

    4. Reversing or Sorting Lists  
       Lists can be reversed or sorted in place using the reverse() and sort() methods:

       ```python
       my_list.sort() # Sorts the list in ascending order
       print(my_list) # Output: [1, 2, 4, 20]

       my_list.reverse() # Reverses the list
       print(my_list) # Output: [20, 4, 2, 1]
       ```

    ***

2.  **Write short note on build in list operators**
    Python provides several built-in operators that can be used with lists, enhancing their functionality and allowing for convenient manipulation of list data structures. Below are the key list operators:

    1. Concatenation (`+`)  
       The concatenation operator `+` is used to combine two or more lists into a single list.  
        **Example:**

       ```python
         list1 = [1, 2, 3]
         list2 = [4, 5, 6]
         combined_list = list1 + list2
         print(combined_list)  # Output: [1, 2, 3, 4, 5, 6]
       ```

    2. Repetition (_)  
        The repetition operator _ is used to repeat a list a specified number of times.

       **Example:**

       ```python
       list1 = [1, 2, 3]
       repeated_list = list1 * 2
       print(repeated_list)  # Output: [1, 2, 3, 1, 2, 3]
       ```

    3. Membership (in and not in)  
       The membership operators in and not in are used to check if an element exists in a list.

       **Example:**

       ```python
       list1 = [1, 2, 3, 4, 5]
       print(3 in list1) # Output: True
       print(6 not in list1) # Output: True
       ```

    4. Indexing and Slicing
       Lists support indexing and slicing to access elements or sublists. Indexing is done with square brackets, and it can handle negative indices as well.
       **Example:**

       ```python
       list1 = [10, 20, 30, 40, 50]
       print(list1[0]) # Output: 10 (first element)
       print(list1[-1]) # Output: 50 (last element)
       print(list1[1:4]) # Output: [20, 30, 40] (slicing)
       ```

    5. Length (len())
       The len() function returns the number of elements in a list.

       **Example:**

       ```python
        list1 = [1, 2, 3, 4]
        print(len(list1))  # Output: 4
       ```

    6. Slicing ([:]):
       The slicing operator extracts a portion of a list.

       ```python
       Copy code
       my_list = [1, 2, 3, 4, 5]
       print(my_list[1:4])  # Output: [2, 3, 4]
       ```

    ***

3.  **What are lists? How to define and access the elements of list.**
    A **list** in Python is a collection of items (elements) that are ordered and changeable (mutable). Lists can hold items of any data type, including integers, floats, strings, or even other lists.

    ### Defining a List

    Lists are created using square brackets []. You can define a list with any number of elements, and the elements can be of mixed types.

    ```python
    # Empty list
    my_list = []

    # List with integers
    my_list = [1, 2, 3, 4, 5]

    # List with mixed data types
    my_list = [1, "apple", 3.14, True]
    ```

    ### Accessing List Elements

      You can access elements in a list using indexing. Indexing starts from 0 for the first element, and negative indexing starts from -1 for the last element.

      ```python
      my_list = ["apple", "banana", "cherry"]

      # Accessing elements
      first_item = my_list[0]   # Output: 'apple'
      second_item = my_list[1]  # Output: 'banana'

      # Accessing the last element (using negative indexing)
      last_item = my_list[-1]   # Output: 'cherry'

      # Slicing (accessing a range of elements)
      sub_list = my_list[0:2]   # Output: ['apple', 'banana']
      ```

    ### Modifying a List

     Since lists are mutable, you can change their content by directly assigning new values:

      ```python
      Copy code
      my_list = ["apple", "banana", "cherry"]

      # Modifying an element
      my_list[1] = "orange"  # ['apple', 'orange', 'cherry']

      # Appending a new element
      my_list.append("grape")  # ['apple', 'orange', 'cherry', 'grape']

      # Removing an element
      my_list.remove("orange")  # ['apple', 'cherry', 'grape']

      # Inserting an element at a specific position
      my_list.insert(1, "kiwi")  # ['apple', 'kiwi', 'cherry', 'grape']
      ```

    ***

4.  **What is dictionary? How create and access it? Explain the properties of dictionary keys.**
5.  **Write short note on tuple in Python.**
6.  **What is Exception? List and explain any five built in Exceptions in Python.**
7.  **Write short note on Exception with arguments and user defined exception.**
8.  **What is file? What are its operating modes?**

9.  **Write short note on file object attributes and file methods.**
10. **Write a short program to deal with text file in Python.**

    ```python
    file = open("tl.tx", "r")
    print(file.name)
    file.write("hii")
    print(file.closed)
    file.close()
    print(file.close)
    print(file.mode)
    ```

11. **What are regular expressions? Explain any five patterns.**
12. **Write a python program to calculate the area of a triangle and circle and print the result.
    Note: Take input from the user.**

    [Answer]

    ```python
    '''---------- Area of triangle Program ------- '''
    # Read Base, Heigth
    Base = int(input("Enter Base: "))
    Heigth = int(input("Enter Heigth: "))

    # Formula => AreaOfTriangle = (Base * Heigth) / 2
    AreaOfTriangle = (Base * Heigth) / 2

    # print result
    print("Area Of Triangle = ", AreaOfTriangle)
    '''------------***************--------------'''


    '''---------- Area of circle Program --------'''
    # Read radius
    radius = int(input("Enter radius: "))
    pi = 3.14

    # Formula => AreaOfCircle = pi * radius ** 2
    AreaOfCircle = pi * radius ** 2

    # print result
    print("Area Of Circle = ", AreaOfCircle)
    '''------------***************--------------'''
    ```

    ***

13. **Explain features of python programs.**

    [Answer]

    1. **Readable and Maintainable Code**

       - **Clean Syntax**: _Python's syntax is designed to be easy to read and write. Its use of indentation to define code blocks instead of braces makes the code more visually appealing and easier to follow._
       - **Concise**: _Python often allows developers to express concepts in fewer lines of code compared to other languages, which enhances readability and maintainability._

    2. **Interpreted Language**

       - **Dynamic Execution**: _Python code is executed line-by-line by the Python interpreter, which means there’s no need for a separate compilation step. This feature facilitates quick testing and iterative development._

    3. **Dynamic Typing**

       - **Type Flexibility**: _Variables in Python do not need to be explicitly declared with a type. The type is determined at runtime based on the value assigned to the variable. This makes Python code more flexible and easier to write._

    4. **Object-Oriented Programming (OOP)**

       - **Classes and Objects**: _Python supports OOP principles, allowing you to define classes and create objects. This promotes code reuse and organization._
       - **Inheritance and Polymorphism**: _Python supports inheritance, enabling the creation of new classes based on existing ones, and polymorphism, allowing for methods to operate differently based on the object calling them._

    5. **Functional Programming Features**

       - **First-Class Functions**: _Functions in Python are first-class objects, meaning they can be passed as arguments, returned from other functions, and assigned to variables._
       - **Lambda Functions**: _Python supports anonymous functions using lambda expressions for short-lived operations._

    6. **Rich Standard Library**

       - **Built-in Modules**: _Python comes with a comprehensive standard library that provides modules and packages for a wide range of tasks, from file handling and regular expressions to web development and networking._

    7. **Community and Ecosystem**

       - **Active Community**: _Python has a large and active community that contributes to its growth through libraries, frameworks, and tools. The community also provides extensive documentation and support._

    8. **Integration Capabilities**

       - **Interfacing with Other Languages**: _Python can interface with other programming languages and technologies, such as Java (via Jython), .NET (via IronPython), and C/C++ (via ctypes or Cython)._

    9. **Exception Handling**

       - **Robust Error Handling**: _Python provides a structured way to handle errors and exceptions using try, except, finally, and raise statements. This helps in managing runtime errors gracefully._

    10. **Cross-Platform Compatibility**
        - **Portability**: _Python programs can run on various operating systems, including Windows, macOS, and Linux, with little to no modification, making it highly portable._

    ***

14. **Discuss differences between local and global variables.**

    | Aspect         | Local Variables                                               | Global Variables                                                                                        |
    | :------------- | :------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------ |
    | Scope          | limited to the block code                                     | Accessible throughout the program                                                                       |
    | Declaration    | Typically within functions or specific blocks                 | Outside of any function or block                                                                        |
    | Access         | Accessible only within the block where they are declared      | Access Accessible only within the block where they are declared Accessible from any part of the program |
    | Lifetime       | Created when the block is entered and destroyed when it exits | Retain their value throughout the lifetime of the program                                               |
    | Name conflicts | Can have the same name as variables in other blocks           | Should be used carefully to avoid unintended side effects                                               |
    | Usage          | Temporary storage, specific to a block of code                | Values that need to be accessed and modified by multiple parts of the program                           |

    ***

15. **Explain if – else statement with an example.**

    [Answer]

    **Definition**: The `if-else` statement is a **_fundamental control structure_** in programming used to make **_decisions_** based on conditions. It allows your program to execute certain code blocks if a condition is true, and different code blocks if the condition is false.

    ```python
    # Syntax
    if condition:
      # Code to execute if the condition is true
    else:
      # Code to execute if the condition is false
    ```

    **Example**: - Let’s say you want to check if a person is eligible to vote. The eligibility criterion is that the person must be 18 years old or older. You can use an `if-else` statement to determine whether they are eligible or not.

    ```python
    # Define the age of the person
    age = 20

    # check if the person is 18 or older
    if age >= 18:
    print("You are eligible to vote.")
    else:
    print("You are not eligible to vote")
    ```

    ***

16. **What are fruitful function and void functions in python**

- **Fruitful Function**: A fruitful function is one that returns a value after its execution. The value returned can be of any data type, such as integers, strings, lists, or even other functions.

  **Characteristics**:

  - Returns a Value: _After performing its operation, a fruitful function uses the return statement to send a result back to the caller._
  - Useful for Further Computation: _The returned value can be used in other operations, stored in variables, or passed to other functions. Example:_

    ```python
    def multiplay(x,y):
      return = x * y

    product = multiplay(4, 5)
    print(product)
    ```

  - In this example, the multiply function returns the product of x and y, which is then used and printed.

- **Void Function**: _A void function, also known as a procedure or a function with no return value, performs some operations but does not return a value. It implicitly returns None._

  **Characteristics**:

  - Does Not Return a Value: _Void functions either complete their operations without using a return statement or use return without providing a value._
  - Used for Side Effects: _Often used to perform actions such as modifying global variables, printing information, or interacting with the user, rather than producing a result that needs to be used later. Example:_

    ```python
    def print_message(message):
      print(message)

    print_message("Hello, World")
    ```

  - In this example, print_message does not return any value. It only performs the action of printing the provided message.

  ***

17. **What are different ways to create strings in python**  
    [Answer]

    1. Single Quotes (`'`)
       You can create a string using single quotes. This is one of the simplest ways to define a string in Python.

       ```python
       string1 = 'Hello, World!'
       ```

       - Example: 'Hello', 'Python is fun!'
       - Single quotes are most commonly used for short strings that do not contain any special characters or quotes.

    2. Double Quotes (")
       Another way to create strings is by using double quotes. Python treats single and double quotes in the same way, so you can choose either depending on your needs.

       ```python
       string2 = "Hello, World!"
       ```

       - Example: "Hello", "Python is great!"
       - Double quotes are useful when your string contains an apostrophe or single quote inside it.

    3. Triple Quotes (''' or """)
       Triple quotes allow you to create multiline strings or strings that contain both single and double quotes. This is particularly helpful for writing large blocks of text, such as documentation, or strings that span multiple lines.

       - Single triple quotes ('''):

       ```python
       string4 = '''This is a multi-line string.'''
       ```

       - Double triple quotes ("""):

       ```python
       string5 = """This is another multi-line string."""
       ```

    4. String Concatenation (+):
       Strings can be concatenated (combined) using the + operator. This is helpful when you want to merge multiple strings into one.
       ```python
       part1 = 'Hello, '
       part2 = 'World!'
       string6 = part1 + part2  # Output: 'Hello, World!'
       ```
    5. f-strings (String Interpolation):
       Introduced in Python 3.6, f-strings (formatted string literals) allow you to embed expressions directly inside a string using curly braces {}. This is a very efficient and readable way to format strings.

       ```python
       name = 'Alice'
       age = 30
       string7 = f'Hello, my name is {name} and I am {age} years old.'
       # Output: 'Hello, my name is Alice and I am 30 years old.'
       ```

       - f-strings also allow for complex expressions.

    6. format() Method:
       The format() method is a flexible way to create strings by embedding values within a string. It allows you to use placeholders ({}) that are replaced with values provided to the format() function.

       ```python
       string9 = 'Hello, {}!'.format('Bob')
       # Output: 'Hello, Bob!'
       ```

    7. % Operator (Old-Style String Formatting):
       The % operator is an older method of formatting strings, similar to the sprintf function in C. It uses placeholders like %s (for strings), %d (for integers), and %f (for floating-point numbers).
       ```python
       string11 = 'Hello, %s!' % 'Charlie'
       # Output: 'Hello, Charlie!'
       ```
    8. str() Function:
       The str() function is used to convert other data types (e.g., integers, floats, lists) into strings.
       ```python
       num = 100
       string13 = str(num)  # Converts integer to string: "100"
       ```

    ***

18. **Write a note on string slicing in python**  
    String slicing is a technique in Python to extract a portion (or "slice") of a string. Python strings are sequences of characters, and you can access specific parts of them by using indexing and slicing.

    ### Basic Syntax for Slicing

    The general syntax for slicing a string is:

    ```python
    string[start:end:step]
    ```

    - `start`: The starting index (inclusive).
    - `end`: The ending index (exclusive).
    - `step`: The interval between characters (optional).

    If any of these values are omitted, Python uses the following defaults:

    - `start`: 0 (beginning of the string).
    - `end`: Length of the string (end of the string).
    - `step`: 1 (every character).

    ### Examples of String Slicing

    ```python
    text = "Hello, World!"

    # Extracting a slice from index 0 to 5 (exclusive)
    slice1 = text[0:5]  # Output: Hello

    # Extracting a slice from index 7 to the end
    slice2 = text[7:]   # Output: World!

    # Extracting a slice with a step of 2
    slice3 = text[::2]  # Output: Hlo ol!

    # Using negative indices
    slice4 = text[-6:-1]  # Output: World
    ```

    ### Points to Remember

    - **Indices start at 0**: The first character of a string has index 0.
    - **`end` index is exclusive**: The character at the `end` index is not included in the slice.
    - **Negative indices**: These count from the end of the string, where `-1` is the last character, `-2` is the second-last, and so on.

    ***

19. **Write a program to check if the entered year is leap year or not?**

    [Answer]

    ```python
    # Read year form user
    inputYear = int(input("Enter Year: "))

    # Check isLeap year
    if(inputYear % 400 == 0) or (inputYear % 4 == 0 and inputYear % 100 != 0):
      print(f"{inputYear} is leap year.")
    else:
      print(f"{inputYear} is not leap year")
    ```

    ***

20. **What is a recursive function? Write its advantages. Explain with examples.**  
    [Answer]

    A recursive function in programming is a function that calls itself in its definition to solve a problem. This approach is often used to solve problems that can be broken down into smaller, similar subproblems.

    ### Key Components of Recursion

    1. **Base Case**: This is a condition that stops the recursion. Without a base case, the function would call itself indefinitely, leading to a stack overflow.
    2. **Recursive Case**: This is where the function calls itself with a modified argument, bringing the problem closer to the base case.

    ## Advantages of Recursive Functions

    1. **Simplicity**: Recursive functions can simplify the code, making it easier to read and maintain, especially for problems that have a natural recursive structure (e.g., tree traversals).
    2. **Reduction in Code Size**: They often lead to fewer lines of code compared to iterative solutions.
    3. **Problem Solving for Complex Structures**: Recursive solutions are particularly useful for problems involving hierarchical structures, such as file directories or organizational charts.

    ## Example: Factorial Calculation

    The factorial of a number \( n \) (denoted as \( n! \)) is the product of all positive integers less than or equal to \( n \). For instance, \( 5! = 5 \times 4 \times 3 \times 2 \times 1 = 120 \).

    ### Recursive Function for Factorial

    Here's how you can implement a recursive function to calculate the factorial of a number in Python:

    ```python
    def factorial(n):
        # Base Case
        if n == 0 or n == 1:
            return 1
        # Recursive Case
        else:
            return n * factorial(n - 1)

    # Example usage
    result = factorial(5)  # Output: 120
    print(result)  # Output: 120
    ---
    ```

21. **What are different type errors in python?**

    1.  **SyntaxError**  
        This error occurs when the code violates Python's syntax rules. It's like making spelling or grammar mistakes in the English language. Some common reasons for `SyntaxError` include:

        - Misspelling a keyword or identifier
        - Missing quotes
        - Open parentheses
        - Mismatched or missing punctuation

    2.  **NameError**
        A `NameError` in Python occurs when you attempt to use or access a variable, function, or module name that has not been defined yet or is out of scope.

    3.  **IndentationError**  
        An `IndentationError` occurs when the spaces at the beginning of a code line do not follow expected patterns.

    4.  **TypeError**  
        A `TypeError` occurs when an operation is performed or a function is applied to an object of an inappropriate type.

    5.  **IndexError**  
        This is another common error that occurs when you try to access an element in a list, tuple, or any other sequence using an invalid index. You will typically get this error when the index you provide is out of the valid range.

    6.  **ValueError**  
        In Python, a `ValueError` is raised when a built-in operation or function receives an argument that has the right type but an inappropriate value. You can get a `ValueError` in various scenarios, such as:

            - Trying to convert a string to an integer
            - Accessing an index that doesn't exist in a list
            - Performing operations with inappropriate values for a specific function or operation.

    7.  **KeyError**  
        In Python, a `KeyError` occurs when a program tries to access a key in a dictionary that doesn't exist. If you attempt to retrieve a value using a key that is not present in the dictionary, you will get a `KeyError`.

    8.  **ZeroDivisionError**  
        In Mathematics, dividing by zero is undefined because we can't share among zero people. Python agrees with Mathematics; that's why it raises a `ZeroDivisionError` whenever you attempt to divide a number by zero.

    ***

22. **Write a bitwise operator in python.**

    1. AND (&)

       - Performs a bitwise AND operation between two integers.

         Example:

         ```python
         a = 12  # binary: 1100
         b = 7   # binary: 0111
         result = a & b  # binary: 0100, which is 4 in decimal
         print(result)  # Output: 4
         ```

    2. OR (|):
       - Performs a bitwise OR operation between two integers.
         Example:
         ```python
           a = 12  # binary: 1100
           b = 7   # binary: 0111
           result = a | b  # binary: 1111, which is 15 in decimal
           print(result)  # Output: 15
         ```
    3. XOR (^)

       - Performs a bitwise XOR (exclusive OR) operation between two integers.

         Example:

         ```python
           a = 12  # binary: 1100
           b = 7   # binary: 0111
           result = a ^ b  # binary: 1011, which is 11 in decimal
           print(result)  # Output: 11
         ```

    4. NOT (~)
       - Performs a bitwise NOT operation, which inverts all the bits of the integer.
         Example:
         ```python
          a = 12  # binary: 1100
          result = ~a  # binary: ...11110011 (2's complement representation), which is -13 in decimal
          print(result)  # Output: -13
         ```
    5. Left Shift (<<)

       - Shifts the bits of the first operand to the left by the number of positions specified by the second operand. Zeroes are shifted in from the right.
         Example:
         ```python
         a = 12  # binary: 1100
         result = a << 2  # binary: 110000, which is 48 in decimal
         print(result)  # Output: 48
         ```

    6. Right Shift (>>)

       - Shifts the bits of the first operand to the right by the number of positions specified by the second operand. The sign bit is shifted in for signed integers.

         Example:

         ```python
         a = 12  # binary: 1100
         result = a >> 2  # binary: 0011, which is 3 in decimal
         print(result)  # Output: 3
         ```

    ***

23. **Write a python program to display the following series**

    ```code
      *
      * *
      * * *
      * * * *
      * * * * *
    ```

    [Answer]

    ```python
    for i in range(1, 6):
      for j in range(1,i+1):
        print("8", end=)
      print()

    # Sort Code
     for i in range(1,6):
      print("* "*i)
    ```

---

24. **Write a short note on looping structure in python.**

    In Python, looping structures allow you to execute a block of code multiple times. They are essential for iterating over sequences or repeating actions without writing redundant code. Python provides two primary looping structures:

    1. **for Loop**:- The for loop is used to iterate over a sequence (like a list, tuple, string, or range) and execute a block of code for each element in the sequence.

       ```python
       # syntax
       for variable in sequence:
           # Code block to execute
       ```

       Example:

       ```python
       for i in range(5):
         print(i)
       ```

       Explanation:

       - range(5) generates a sequence of numbers from 0 to 4.
       - The loop iterates over this sequence, and i takes each value from 0 to 4, printing each value.

    2. **while Loop**:- The while loop repeatedly executes a block of code as long as a specified condition remains True.

       ```python
        # syntax
       while condition:
         # Code block to execute Example:
       ```

       Example:

       ```python
       i = 0
       while i < 5:
         print(i)
         i += 1
       ```

       Explanation:

       - The loop continues to execute as long as i < 5 is True.
       - i is incremented by 1 on each iteration until it no longer meets the condition.

    3. Loop Control Statements  
       Python also provides control statements that modify the flow of loops:

       - `break`: Exits the loop entirely.
       - `continue`: Skips the rest of the code inside the loop for the current iteration and moves to the next iteration.
       - `else`: An optional block that can be added after the loop. It executes if the loop completes normally (i.e., not terminated by a break).
         Example:

       ```python
       for i in range(5):
         if i == 3:
           break
           print(i) else:
           print("Loop completed without a break.")
       ```

       Explanation:

       - The break statement terminates the loop when i equals 3.
       - The else block will not execute because the loop was terminated by break.

    ***

25. **Write a short program to demonstrate the use of parameterized functions.**

    [Amswer]

    ```python
    # Define a parameterized function to cclculate the area of a rectangle
    def calculate_area(length, width):
      area = length * width
      return area

    # Call the function with parameters
    length = 5
    width = 3
    area = calculate_area(length, width)

    # Display the result
    print(f"The area of the rectangle is: {area}")
    ```

    ***

26. **Explain any 5 math functions in python with examples.**

    [Answer]

    1. **`abs()`**:

       - **Description**: The `abs()` function returns the absolute value of a number. The absolute value is the non-negative value of a number without regard to its sign.

       - **Syntax**: `abs(x)`

         - `x`: A number (integer or float).

       - **Example**:
         ```python
         num = -10
         result = abs(num)
         print(result)  # Output: 10
         ```

       ***

    2. **`pow()`**:

       - **Description**: The `pow()` function returns the value of `x` raised to the power of `y` (i.e., `x^y`). Optionally, you can provide a third argument, `z`, to compute the result modulo `z` (i.e., `(x^y) % z`).

       - **Syntax**: `pow(x, y[, z])`

         - `x`: The base number.
         - `y`: The exponent.
         - `z`: Optional. The modulus.

       - **Example**:

         ```python
         result = pow(2, 3)  # 2^3 = 8
         print(result)  # Output: 8

         # With modulus
         result = pow(2, 3, 3)  # (2^3) % 3 = 2
         print(result)  # Output: 2
         ```

       ***

    3. **`round()`**:

       - **Description**: The `round()` function rounds a floating-point number to a specified number of decimal places. If the number of decimal places is not provided, it rounds to the nearest integer.

       - **Syntax**: `round(number[, ndigits])`

         - `number`: The number to round.
         - `ndigits`: Optional. The number of decimal places to round to.

       - **Example**:

         ```python
         num = 5.6789
         rounded_num = round(num, 2)
         print(rounded_num)  # Output: 5.68

         rounded_num = round(num)
         print(rounded_num)  # Output: 6
         ```

       ***

    4. **`math.sqrt()`**:

       - **Description**: The `math.sqrt()` function returns the square root of a given number. This function is part of the `math` module.

       - **Syntax**: `math.sqrt(x)`

         - `x`: The number for which to find the square root. It must be a non-negative number.

       - **Example**:
         ```python
         import math
         result = math.sqrt(16)
         print(result)  # Output: 4.0
         ```

       ***

    5. **`math.factorial()`**:

       - **Description**: The `math.factorial()` function returns the factorial of a given non-negative integer. Factorial of a number `n` is the product of all positive integers less than or equal to `n`.

       - **Syntax**: `math.factorial(x)`

         - `x`: A non-negative integer.

       - **Example**:
         ```python
         import math
         result = math.factorial(5)
         print(result)  # Output: 120  (5! = 5 * 4 * 3 * 2 * 1)
         ```

    ***

27. **Explain the use if in and not in operator in with suitable program.**

    [Answer]

    - **In Operator**:
      The in operator returns True if the value is found in the sequence, and False otherwise.
      Example:

      ```python
      fruits = ['apple', 'banana', 'cherry']
      if 'apple' in fruits:
        print("Apple is in the list")
      else:
        print("Apple is not in the list")
      ```

    - **not in Operator**:
      The in operator returns True if the value is found in the sequence, and False otherwise.  
       Example:

          ```python
          fruits = ['apple', 'banana', 'cherry']
          if 'apple' not in fruits:
            print("Orange is not in the list")
          else:
            print("Orange is in the list")
          ```

    ***

28. **The strings are immutable. Justify.**

    In Python, strings are immutable, meaning that once a string is created, its content cannot be changed. Below are key points that illustrate why strings are immutable.

    ***

    1.  Unchangeable Content

        Once you create a string, its content is fixed and cannot be altered. Python does not allow modifying strings in place. If any operation seems to modify a string, it actually creates a **new string** instead of altering the original one.

        **Example**:

        ```python
        s = "Hello"
        s = s + " World"  # Creates a new string "Hello World"
        print(s)  # Output: Hello World
        ```

        In this example, `s` is not modified; instead, a new string `"Hello World"` is created, and `s` is updated to reference this new string.

        ***

    2.  No In-Place Modification

        You cannot change individual characters in a string because strings do not support item assignment. Trying to do so will result in a `TypeError`.

        **Example**:

        ```python
        s = "Python"
        # Trying to modify the first character raises a TypeError
        try:
            s[0] = 'J'
        except TypeError as e:
            print("Error:", e)  # Output: Error: 'str' object does not support item assignment
        ```

        This occurs because Python strings are immutable, and you cannot alter their individual elements.

        ***

    3.  Efficiency and Performance

        Immutability allows Python to optimize memory usage by reusing string objects, especially for frequently used small string literals. Python can point multiple variables to the same string object if its content is the same, saving memory and improving performance.

        **Example**:

        ```python
        a = "Hello"
        b = "Hello"
        print(a is b)  # Output: True (both 'a' and 'b' point to the same memory location)
        ```

        In this case, Python reuses the same memory location for both `a` and `b` because strings are immutable.

        ***

    4.  Hashing and Dictionary Keys

        Strings can be used as keys in dictionaries and elements in sets because they are **hashable**. An object’s hash value remains constant if the object is immutable. If strings were mutable, their hash values could change, making them unsuitable for use as dictionary keys.

        **Example**:

        ```python
        d = {"name": "Alice"}
        print(d["name"])  # Output: Alice
        ```

        Since strings are immutable, their hash value stays constant, making them ideal for dictionary keys.

        ***

    5.  Safety

            Immutability ensures that strings are safe from accidental changes, which is crucial in multi-threaded environments. When different parts of a program share the same string, immutability guarantees that no thread can alter the string's content unexpectedly.

        **Example Demonstrating Immutability**:

        ```python
        s = "Immutable"

        # Trying to modify the string raises an error
        try:
            s[0] = "M"
        except TypeError as e:
            print("Error:", e)  # Output: Error: 'str' object does not support item assignment

        # To "change" a string, create a new one
        new_s = "M" + s[1:]
        print("New string:", new_s)  # Output: Mutable
        ```

        ***

29. **Explain string operations with an example.**  
    In Python, strings support various operations that allow you to manipulate and interact with them effectively. Here are some common string operations explained with examples.

    1. Concatenation

       Concatenation is the operation of joining two or more strings end-to-end to create a new string.

       **Example**:

       ```python
       str1 = "Hello"
       str2 = "World"
       result = str1 + " " + str2  # Concatenating with a space in between
       print(result)  # Output: Hello World
       ```

       ***

    2. Repetition

       Repetition involves repeating a string multiple times using the multiplication operator (`*`).

       **Example**:

       ```python
       str1 = "Python"
       result = str1 * 3  # Repeating the string 3 times
       print(result)  # Output: PythonPythonPython
       ```

       ***

    3. Slicing

       Slicing is used to extract a portion of a string. It uses the syntax `string[start:end]`, where `start` is the index of the first character and `end` is the index of the character up to (but not including).

       **Example**:

       ```python
       str1 = "Hello, World!"
       sliced_str = str1[7:12]  # Extracting "World"
       print(sliced_str)  # Output: World
       ```

       ***

    4. Length

       The `len()` function returns the number of characters in a string.

       **Example**:

       ```python
       str1 = "Hello, World!"
       length = len(str1)  # Getting the length of the string
       print(length)  # Output: 13
       ```

       ***

    5. Uppercase and Lowercase Conversion

       You can convert a string to all uppercase or all lowercase using `upper()` and `lower()` methods.

       **Example**:

       ```python
       str1 = "Python"
       upper_str = str1.upper()  # Converting to uppercase
       lower_str = str1.lower()  # Converting to lowercase
       print(upper_str)  # Output: PYTHON
       print(lower_str)  # Output: python
       ```

    ***

30. **Explain the lower(), Split(), find(), len(), isdigit() function with example**  
    [Answer]

    1. **`lower()`**:

       - **Description**: The `lower()` method converts all characters in a string to lowercase. It returns a new string with all characters in lowercase.

       - **Syntax**: `string.lower()`

       - **Example**:
         ```python
         text = "Hello, World!"
         lower_text = text.lower()
         print(lower_text)  # Output: hello, world!
         ```

       ***

    2. **`split()`**:

       - **Description**: The `split()` method divides a string into a list of substrings based on a specified delimiter (default is any whitespace). It returns a list of strings.

       - **Syntax**: `string.split([separator[, maxsplit]])`

         - `separator`: Optional. Specifies the delimiter to split on. Defaults to whitespace.
         - `maxsplit`: Optional. Specifies the maximum number of splits. Defaults to -1, meaning "all occurrences."

       - **Example**:
         ```python
         text = "apple banana mango"
         result = text.split()
         print(result)  # Output: ['apple', 'banana', 'mango']
         ```

       ***

    3. **`find()`**:

       - **Description**: The `find()` method searches for a specified substring within a string and returns the index of the first occurrence. If the substring is not found, it returns `-1`.

       - **Syntax**: `string.find(substring[, start[, end]])`

         - `substring`: The substring to search for.
         - `start`: Optional. The starting index from where to begin the search.
         - `end`: Optional. The index where the search should stop.

       - **Example**:
         ```python
         text = "Welcome to Python programming"
         result = text.find("Python")
         print(result)  # Output: 11 (index where 'Python' starts)
         ```

       ***

    4. **`len()`**:

       - **Description**: The `len()` function returns the length of a string (i.e., the number of characters in the string).

       - **Syntax**: `len(string)`

       - **Example**:
         ```python
         text = "Hello, World!"
         length = len(text)
         print(length)  # Output: 13
         ```

       ***

    5. **`isdigit()`**:

       - **Description**: The `isdigit()` method checks if all the characters in a string are digits. It returns `True` if the string contains only numeric characters, otherwise `False`.

       - **Syntax**: `string.isdigit()`

       - **Example**:

         ```python
         text = "12345"
         result = text.isdigit()
         print(result)  # Output: True

         text = "123abc"
         result = text.isdigit()
         print(result)  # Output: False
         ```

    ***

31. **Explain any 10 string function with an example.**  
     [Answer]

    1. **`lower()`**:  
       **Description**: The `lower()` method converts all characters in a string to lowercase. It returns a new string with all characters in lowercase.

       - **Syntax**: `string.lower()`

       - **Example**:
         ```python
         text = "Hello, World!"
         lower_text = text.lower()
         print(lower_text)  # Output: hello, world!
         ```

    ***

    2. **`split()`**:  
       **Description**: The `split()` method divides a string into a list of substrings based on a specified delimiter (default is whitespace). It returns a list of strings.

       - **Syntax**: `string.split([separator[, maxsplit]])`

         - `separator`: Optional. Specifies the delimiter to split on. Defaults to whitespace.
         - `maxsplit`: Optional. Specifies the maximum number of splits. Defaults to -1, meaning "all occurrences."

       - **Example**:
         ```python
         text = "apple banana mango"
         result = text.split()
         print(result)  # Output: ['apple', 'banana', 'mango']
         ```

       ***

    3. **`find()`**:  
       **Description**: The `find()` method searches for a specified substring within a string and returns the index of the first occurrence. If the substring is not found, it returns `-1`.

       - **Syntax**: `string.find(substring[, start[, end]])`

         - `substring`: The substring to search for.
         - `start`: Optional. The starting index from where to begin the search.
         - `end`: Optional. The index where the search should stop.

       - **Return Value**:

         - Returns the index of the first occurrence of the substring.
         - Returns `-1` if the substring is not found.

       - **Example**:
         ```python
         text = "Welcome to Python programming"
         result = text.find("Python")
         print(result)  # Output: 11 (index where 'Python' starts)
         ```

       ***

    4. **`replace()`**:  
       **Description**: The `replace()` method replaces a specified substring with another substring within a string. It returns a new string with the replacements made.

       - **Syntax**: `string.replace(old, new[, count])`

         - `old`: The substring to be replaced.
         - `new`: The substring to replace the old one.
         - `count`: Optional. The maximum number of replacements to make. Defaults to all occurrences.

       - **Example**:
         ```python
         text = "Hello, World!"
         replaced_text = text.replace("World", "Python")
         print(replaced_text)  # Output: Hello, Python!
         ```

    ***

    5. **`upper()`**:  
       **Description**: The `upper()` method converts all characters in a string to uppercase. It returns a new string with all characters in uppercase.

       - **Syntax**: `string.upper()`

       - **Example**:
         ```python
         text = "hello, world!"
         upper_text = text.upper()
         print(upper_text)  # Output: HELLO, WORLD!
         ```

    ***

    6. **`join()`**:  
       **Description**: The `join()` method concatenates the elements of an iterable (such as a list) into a single string, with each element separated by the string calling `join()`.

       - **Syntax**: `separator.join(iterable)`

       - **Example**:
         ```python
         words = ["apple", "banana", "mango"]
         result = ", ".join(words)
         print(result)  # Output: apple, banana, mango
         ```

    ***

    7.  **`strip()`**:  
        **Description**: The `strip()` method removes leading and trailing whitespace (or specified characters) from a string.

            - **Syntax**: `string.strip([chars])`
              - `chars`: Optional. A string of characters to be removed. If omitted, it removes whitespace.

            - **Example**:
              ```python
              text = "  Hello, World!  "
              stripped_text = text.strip()
              print(stripped_text)  # Output: "Hello, World!"
              ```

    ***

    8. **`startswith()`**:  
       **Description**: The `startswith()` method checks if a string starts with a specified prefix. It returns `True` if the string starts with the specified prefix, otherwise `False`.

       - **Syntax**: `string.startswith(prefix[, start[, end]])`

       - **Example**:
         ```python
         text = "Hello, World!"
         result = text.startswith("Hello")
         print(result)  # Output: True
         ```

    ***

    9. **`endswith()`**:  
       **Description**: The `endswith()` method checks if a string ends with a specified suffix. It returns `True` if the string ends with the specified suffix, otherwise `False`.

       - **Syntax**: `string.endswith(suffix[, start[, end]])`

       - **Example**:
         ```python
         text = "Hello, World!"
         result = text.endswith("World!")
         print(result)  # Output: True
         ```

    ***

    10. **`capitalize()`**:  
        **Description**: The `capitalize()` method converts the first character of a string to uppercase and the rest to lowercase. It returns a new string with the capitalized format.

        - **Syntax**: `string.capitalize()`

        - **Example**:
          ```python
          text = "hello, world!"
          capitalized_text = text.capitalize()
          print(capitalized_text)  # Output: Hello, world!
          ```

    ***

32. **Write a Python program to find those numbers which are divisible by 7 and multiples of 5, between 1500 and 2700 (both included).**  
    [Answer]

    ```python
    def findNumber():
      result = []
      for num in range(1500, 2701): # Loop through the range 1500 to 2700
        if num % 7 == 0 and num % 5 == 0: # check if divisible by 7 and multiple of 5
          result.append(num)
      return result

    # Call the function and print the result
    numbers = findNumber()
    print("Number divisible by 7 and multiple of 5 between 1500 and 2700:=>", numbers)
    ```

    ***

33. **Write a Python program to convert temperatures to and from Celsius and Fahrenheit.**

    [Answer]

    ```python
    # Convert Celsius To Fahrenheit
    def convertCelsiusToFahrenheit(celsius):
      Fahrenheit = (9/5 * celsius) + 32
      print(f"Formula:=> ({celsius}°C * 9/5) +  32 =  {Fahrenheit}°F")

    print("Celsius To Fahrenheit")
    Celsius = 35
    convertCelsiusToFahrenheit(Celsius)

    # Convert Fahrenheit To Celsius
    def convertFahrenheitToCelsius(Fahrenheit):
      Celsius = (Fahrenheit - 32) * 5/9
      print(f"Formula:=> ({Fahrenheit}°F - 32) * 5/9 =  {Celsius}°C")

    print("Fahrenheit To Celsius ")
    Fahrenheit = 95
    convertFahrenheitToCelsius(Fahrenheit)
    ```

    ***

34. **Write a Python program to guess a number between 1 and 9.
    Note : User is prompted to enter a guess. If the user guesses wrong then the prompt appears again until the guess is correct, on successful guess, user will get a "Well guessed!" message, and the program will exit.**

    [Answer]

    ```python
    import random
    guess = None
    num = random.randint(1,9)

    while guess !=  num:
      guess = int(input("Guess the number between 1 to 9:- "))

      if guess ==  num:
        print("Well guessed!")
      else:
        print("Wrong guess!, Try again")
    ```

    ***

35. **Write a Python program that accepts a string and calculates the number of digits and letters.**

    [Answer]

    ```python
    def count_digit_and_latter(input_string):
      letters = 0
      digits = 0

      for char in input_string:
        if char.isalpha(): # check if the character is a letter
          letters += 1
        elif char.isdigit(): # check if the digit in character
          digits += 1
      print(f"Letters: {letters}")
      print(f"digits: {digits}")

    # Accept input from the user
    user_input = input("Enter a string: ")
    count_digit_and_latter(user_input)
    ```

    ***

36. **Write a Python program that checks whether a string represents an integer or not.**  
    [Answer]

    ```python
    def isInteger(input_string):
      try:
        # Try to convert the string to an integer
        int(input_string)
        print(f"'{input_string}' is an integer")
      except ValueError:
        print(f"'{input_string}' is not an integer")


    # Accept input from the user
    user_input = input("Enter a string: ")
    isInteger(user_input)
    ```

    ***

37. **Rewrite the following program after finding and correcting errors and underlining it.**

    ```
    # Quetion
    250 =  Number
    WHILE Number <= 1000:
      if Number => 750
        print(Number)
        Number =  Number + 100
      else
      print(Number*2)
    Number = Number + 50
    ```

    ```python
    # Answer
    Number = 250 # Deceration to variable

    while Number <= 1000:
        if Number >= 750:
            print(Number)
            Number = Number + 100 # Number = 350
        else:
            print(Number * 2) # Number = 500
            Number = Number + 50 # Number = 550


    ```

    ***

    ```
    # Quetion
    STRING = ""WELCOME NOTE""
    for S in range(0, 8):
      print(STRING(S))
    ```

    ```python
    # Answer
    STRING = "WELCOME NOTE" # String not double "
    for s in range(0, 8):
      print(STRING[s])
    ```

    ***

    ```
    # Quetion
    Val = int(rawinput("Value: "))
    Adder = 0
    for C in range(1, Val, 3):
      Adder += C
      if C % 2 == 0:
        print(C * 10)
      else:
        print(C * 5)

     print(Adder)

    ```

    ```python
    # Answer
    Val = int(input("Value: "))  # Changed rawinput() to input() for Python 3
    Adder = 0
    for C in range(1, Val + 1, 3):  # Changed Val to Val + 1 to include 'Val' in the range
      Adder += C
      if C % 2 == 0:
        print(C * 10)
      else:
        print(C * 5)

    print(Adder)  # Fixed the indentation for print(Adder)
    ```

    ***

    ```
    # Quetion
    i == 1
    a = init(input("ENTER FIRST NUMBER"))
    FOR i in range(1,11):
      print(a, "* =",i "=", a*i)
    ```

    ```python
    # answer
    i = 1
    a = int(input("ENTER FIRST NUMBER: "))
    for i in range(1, 11):
     print(a, "*", i, "=", a * i)

    ```

    ***

    ```
    # Quetion
    25 = Val
    for I in the range(0, Val)
      if I % 2 == 0:
        print(I+1)
      Else:
        print(I-1)
    ```

    ```python
    Val = 25
    for I in range(9, Val):
      if I % 2 == 0:
        print(I + 1)
      else:
        print(I - 1)
    ```

    ***

    ```
    a = "1"
    while a >= 10:
    print("Value of a= ", a)
    a =+ 1
    ```

    ```python
    a = 1
    while a <= 10:
      print("Value of a = ", a)
      a += 1
    ```

---
