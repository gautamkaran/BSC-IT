# Define a function that computes the length of a given list or string.(IT LAB)

def compute_length(list_Or_string):
  if not isinstance(list_Or_string, (list, str)):
    print("input must be list or string")
  return print(len(list_Or_string))

compute_length("KaranGautam")
compute_length([9,6,4,8,7,7,5,4,4,0])