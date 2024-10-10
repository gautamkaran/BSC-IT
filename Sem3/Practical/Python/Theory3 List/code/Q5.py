"""
Write a Python program to clone or copy a list()
"""

def clone_list(lst):
    return lst.copy()

# Example usage
original_list = [1, 2, 3, 4, 5]
cloned_list = clone_list(original_list)

print("Original list:", original_list)
print("Cloned list:", cloned_list)
