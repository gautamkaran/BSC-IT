# Design a database application to that allows the user to add, delete and modify the records. (HOMEWORK)

import sqlite3

# Connect to SQLite database (creates the file if it doesn't exist)
connection = sqlite3.connect('school.db')
cursor = connection.cursor()

# Create table if it doesn't exist
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

# Function to delete a student by ID
def delete_student(student_id):
    cursor.execute("DELETE FROM students WHERE id = ?", (student_id,))
    connection.commit()
    if cursor.rowcount > 0:
        print("Student deleted successfully!")
    else:
        print("No student found with that ID.")

# Function to update a student's information
def update_student(student_id, new_name, new_age):
    cursor.execute("UPDATE students SET name = ?, age = ? WHERE id = ?", (new_name, new_age, student_id))
    connection.commit()
    if cursor.rowcount > 0:
        print("Student record updated successfully!")
    else:
        print("No student found with that ID.")

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
        print("3. Update Student")
        print("4. Delete Student")
        print("5. View All Students")
        print("6. Exit")
        choice = input("Enter your choice: ")

        if choice == '1':
            name = input("Enter student name: ")
            age = int(input("Enter student age: "))
            add_student(name, age)

        elif choice == '2':
            name = input("Enter student name to search: ")
            search_student(name)

        elif choice == '3':
            student_id = int(input("Enter student ID to update: "))
            new_name = input("Enter new name: ")
            new_age = int(input("Enter new age: "))
            update_student(student_id, new_name, new_age)

        elif choice == '4':
            student_id = int(input("Enter student ID to delete: "))
            delete_student(student_id)

        elif choice == '5':
            view_students()

        elif choice == '6':
            print("Exiting the program.")
            break

        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()

# Close the database connection
connection.close()
