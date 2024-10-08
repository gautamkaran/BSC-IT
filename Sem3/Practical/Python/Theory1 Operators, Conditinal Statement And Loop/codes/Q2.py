"""
 Enter the number from the user and depending on whether the number is enven or odd, print out an appropriate message to the user.
"""

# read number from user
number = int(input("Enter the number:- "))

# find number is even or odd
def isEvenOrOdd(number):
  message = ""
  if number % 2 == 0:
   message  = "even"
  else:
    message = "Odd"
  return message

# print out message
print(f"{number} is {isEvenOrOdd(number)} number.")