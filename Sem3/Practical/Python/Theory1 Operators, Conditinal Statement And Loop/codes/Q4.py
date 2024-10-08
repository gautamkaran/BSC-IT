"""
 Write a recursive function to print the factorial for a given number.(HOMEWORK)
"""

def factorial(num):
  if num == 1:
    return 1
  else:
    return num * factorial(num - 1)

num = int(input("Enter your number: "))

print("Factorial of" , num ,"=", factorial(num))

