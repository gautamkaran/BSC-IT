"""
Write a Python program to print a specified list after removing the 0th, 2nd, 4th and 5th elements. 

"""

def remove_elements(lst):
    return [lst[i] for i in range(len(lst)) if i not in (0, 2, 4, 5)]

# Example usage
my_list = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
updated_list = remove_elements(my_list)

print("Updated list:", updated_list)
