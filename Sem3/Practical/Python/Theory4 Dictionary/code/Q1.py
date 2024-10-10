"""
Write a Python script to sort (ascending and descending) a dictionary by value
"""


# Function to sort dictionary by value (ascending and descending)
def sort_dict_by_value(d):
    # Sort by value in ascending order
    ascending = dict(sorted(d.items(), key=lambda item: item[1]))
    
    # Sort by value in descending order
    descending = dict(sorted(d.items(), key=lambda item: item[1], reverse=True))
    
    return ascending, descending

# Example dictionary
my_dict = {'apple': 5, 'banana': 2, 'cherry': 7, 'date': 3}

# Sorting the dictionary
asc_sorted, desc_sorted = sort_dict_by_value(my_dict)

# Display results
print("Dictionary sorted by value (ascending):", asc_sorted)
print("Dictionary sorted by value (descending):", desc_sorted)
