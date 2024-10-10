"""
Write a program that takes two lists and returns True if they have at least one common member
"""

def common_member(list1, list2):
    # Loop through each element in the first list
    for item in list1:
        # Check if the item is in the second list
        if item in list2:
            return True
    return False

# Example usage
list1 = [1, 2, 3, 4]
list2 = [5, 6, 7, 4]

print(common_member(list1, list2))  # Output: True
