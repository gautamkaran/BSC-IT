"""
Write a Python program to sum all the items in a dictionary. 
"""
# Function to sum all the values in a dictionary
def sum_dict_values(d):
    return sum(d.values())

# Example dictionary
my_dict = {'a': 10, 'b': 20, 'c': 30, 'd': 40}

# Calculate the sum of all values
total_sum = sum_dict_values(my_dict)

# Display the result
print("The sum of all values in the dictionary is:", total_sum)
