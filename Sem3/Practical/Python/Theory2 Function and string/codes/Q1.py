# Write a function that takes a character (i.e. a string of length 1) and returns True if it is a vowel, False otherwise.(IT LAB) 

# function 
def isVolel(char):
  input =  char.lower()
  vowel =  "aeiou"

  if(len(input) > 1): 
    return print("error : A charecter of length more then 1")
  else:   
    return print(input in vowel)


char  = input("Enter a only one character: ")
isVolel(char)