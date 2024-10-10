"""
Write a program to generate the Fibonacci series(HOMEWORK)
"""
num = int(input("Enter your number:- "))
num1 = 0
num2 = 1

for i in range(num):
  print(num1)
  next = num1 + num2
  num1 = num2
  num2 = next