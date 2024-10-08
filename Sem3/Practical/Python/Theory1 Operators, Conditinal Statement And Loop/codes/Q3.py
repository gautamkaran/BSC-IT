"""
write a function to check the input value is Armstrong and also write the function for Palindrome.
"""

import math 
num = input("Enter your number: ")
no_digit = len(num)
num = temp = int(num)
Armstrong = 0
Palindrome = 0

while(num != 0):
  no = num % 10
  Armstrong = int(Armstrong+math.pow(no, no_digit))
  Palindrome =  Palindrome * 10 + no
  num  //= 10

if(Armstrong == temp):
  print("No you entered is an Armstrong Number.")
else:
  print("No you entered is not an Armstrong Number.")

if(Palindrome == temp):
  print("No you entered is an Palondrome Number.")
else:
  print("No you entered is not an Palindrome Number.")

  