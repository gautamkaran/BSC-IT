# Design a database application to search the specified record from the database. (IT LAB)

import sqlite3

# Connect to SQLite database (creates the file if it doesn't exist)
connection = sqlite3.connect('school.db')
cursor = connection.cursor()

# Create the 'students' table if it doesn't exist
cursor.execute('''
    CREATE TABLE IF NOT EXISTS students (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT,
        age INTEGER
    )
''')

# Function to add a new student
def add_student(name, age):
    cursor.execute("INSERT INTO students (name, age) VALUES (?, ?)", (name, age))
    connection.commit()
    print("Student added successfully!")

# Function to search for a student by name
def search_student(name):
    cursor.execute("SELECT * FROM students WHERE name = ?", (name,))
    records = cursor.fetchall()
    if records:
        print("\nFound Student Records:")
        print("ID | Name     | Age")
        print("--------------------")
        for record in records:
            print(f"{record[0]:<2} | {record[1]:<8} | {record[2]}")
    else:
        print("No student found with that name.")

# Function to view all students
def view_students():
    cursor.execute("SELECT * FROM students")
    records = cursor.fetchall()
    print("\nID | Name     | Age")
    print("--------------------")
    for record in records:
        print(f"{record[0]:<2} | {record[1]:<8} | {record[2]}")

# Main function for user interaction
def main():
    while True:
        print("\n1. Add Student")
        print("2. Search Student")
        print("3. View All Students")
        print("4. Exit")
        choice = input("Enter your choice: ")

        if choice == '1':
            name = input("Enter student name: ")
            age = int(input("Enter student age: "))
            add_student(name, age)

        elif choice == '2':
            name = input("Enter student name to search: ")
            search_student(name)

        elif choice == '3':
            view_students()

        elif choice == '4':
            print("Exiting the program.")
            break

        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()

# Close the database connection
connection.close()
