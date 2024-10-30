# Write a Python program to read the last n lines of a file. (HOMEWORK)

def read_last_line(filename = "./Text.txt"):
  try:
    file = open(filename, "r")
    line = file.readlines()
    last_line = line[-1].splitlines()
    return last_line
  except FileNotFoundError:
    print("File not found")
    return None
  
print(f"Read Last line of file :=> \n{read_last_line()}")
