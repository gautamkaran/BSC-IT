# Write a Python program to append text to a file and display the text. (IT LAB)

def read_file():
  file = open("./Text.txt", "r")
  print (file.read())


def append_file(filename, text):
  try:
    file  =  open(filename, "a")
    file.write(text + "\n")
  except Exception:
    print("Error Appending File")

append_file("./Text.txt", "karana")
read_file()