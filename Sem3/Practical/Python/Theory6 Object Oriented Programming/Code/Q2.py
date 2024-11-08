# Implement the concept of inheritance using python (IT LAB)
# Base class (Parent)
class Person:
    # Constructor to initialize person details
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Method to display person's information
    def display_info(self):
        print("Person Information")
        print("------------------")
        print(f"Name: {self.name}")
        print(f"Age : {self.age}")

# Derived class (Child)
class Student(Person):
    # Constructor to initialize student details, using inheritance
    def __init__(self, name, age, roll_number, course):
        # Call the constructor of the base class (Person)
        super().__init__(name, age)
        self.roll_number = roll_number
        self.course = course

    # Method to display student's information, extending the base class method
    def display_student_info(self):
        # Display person information from the base class
        self.display_info()
        print(f"Roll Number: {self.roll_number}")
        print(f"Course     : {self.course}")

# Main function
if __name__ == "__main__":
    # Creating an object of the Student class
    student_name = input("Enter the student's name: ")
    student_age = int(input("Enter the student's age: "))
    student_roll_number = input("Enter the roll number: ")
    student_course = input("Enter the course: ")

    # Create a Student object
    student = Student(student_name, student_age, student_roll_number, student_course)

    # Display the student's information
    student.display_student_info()
