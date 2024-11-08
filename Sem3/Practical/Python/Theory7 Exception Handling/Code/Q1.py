# Write a program to implement exception handling. (IT LAB)
# Program to handle division by zero error

try:
    # Taking user input
    num1 = int(input("Enter the numerator: "))
    num2 = int(input("Enter the denominator: "))
    
    # Attempting division
    result = num1 / num2
    print(f"Result: {result}")

except ZeroDivisionError:
    # Handling division by zero error
    print("Error: Cannot divide by zero.")

except ValueError:
    # Handling invalid input error
    print("Error: Please enter valid integers.")

print("Program finished successfully.")
