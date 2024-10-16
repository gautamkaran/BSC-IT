## Python QB

1.  **List in python are mutable. Justify**
2.  **Write short note on build in list operators**
3.  **What are lists? How to define and access the elements of list.**
4.  **What is dictionary? How create and access it? Explain the properties of dictionary keys.**
5.  **Write short note on tuple in Python.**
6.  **What is Exception? List and explain any five built in Exceptions in Python.**
7.  **Write short note on Exception with arguments and user defined exception.**
8.  **What is file? What are its operating modes?**
9.  **Write short note on file object attributes and file methods.**
10. **Write a short program to deal with text file in Python.**
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
17. **What are different ways to create strings in python**
18. **Write a note on string slicing in python**
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

20. **What is a recursive function? Write its advantages. Explain with examples.**
21. **What are different type errors in python?**
22. **Write a bitwise operator in python.**
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
25. **Write a short program to demonstrate the use of parameterized functions.**
26. **Explain any 5 math functions in python with examples.**
27. **Explain the use if in and not in operator in with suitable program.**
28. **The strings are immutable. Justify.**
29. **Explain string operations with an example.**
30. **Explain the lower(), Split(), find(), len(), isdigit() function with example**
31. **Explain any 10 string function with an example.**
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
