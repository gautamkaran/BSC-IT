# Write a Python program to read an entire text file. (IT LAB)

def read_file ():
  filename = input("Enter Filename to read it: ")
  
  try:
    file = open(filename, "r+")
    print(f"File Readed successfully:=> \n{file.read()}")
  except FileNotFoundError :
    print(f"{filename} is not found")

read_file()