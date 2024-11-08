# Design a class that store the information of student and display the same (IT LAB)

# Define the Student class
class Student:
    # Constructor to initialize student details
    def __init__(self, name, roll_number, course, marks):
        self.name = name
        self.roll_number = roll_number
        self.course = course
        self.marks = marks

    # Method to display student details
    def display_info(self):
        print("Student Information")
        print("-------------------")
        print(f"Name         : {self.name}")
        print(f"Roll Number  : {self.roll_number}")
        print(f"Course       : {self.course}")
        print(f"Marks        : {self.marks}")

# Main function
if __name__ == "__main__":
    # Taking input from the user
    name = input("Enter the student's name: ")
    roll_number = input("Enter the roll number: ")
    course = input("Enter the course: ")
    marks = float(input("Enter the marks: "))

    # Creating an object of the Student class
    student = Student(name, roll_number, course, marks)

    # Displaying the student information
    student.display_info()
