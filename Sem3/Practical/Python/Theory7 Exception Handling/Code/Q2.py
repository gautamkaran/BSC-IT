# Write a program for raising and handling unrelated exceptions. 

# Custom Exception Class
class NegativeNumberError(Exception):
    pass

try:
    # Taking user input
    num = int(input("Enter a positive integer: "))
    
    # Raise custom exception if the input is negative
    if num < 0:
        raise NegativeNumberError("Negative numbers are not allowed.")
    
    # Raise a ZeroDivisionError if the number is zero
    result = 10 / num
    print(f"Result: {result}")

except NegativeNumberError as e:
    # Handling custom exception
    print(f"Error: {e}")

except ZeroDivisionError:
    # Handling division by zero
    print("Error: Cannot divide by zero.")

except ValueError:
    # Handling invalid input
    print("Error: Please enter a valid integer.")

print("Program finished.")
