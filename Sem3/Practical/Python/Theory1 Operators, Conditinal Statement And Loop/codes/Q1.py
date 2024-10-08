'''
 Craete a program that asks the user to enter their name and their age. 
 Print out a message addressed to them that tells them the year thet they will turn 100 years old.
'''
# Get user name and birth year
name = input("Enter your name:- ")
birth_year =  int(input("Enter the birth year:- "))

# Calucate the current year
from datetime import datetime
current_year = datetime.now().year

# Calculation they will turn 100 years old
year_when_100 =  (current_year -  birth_year) + 100

# print result
print(f"{name} you will turn 100 years old in the year {year_when_100}")