# Design a simple database application that stores the records and retrieves the same. (IT LAB)

import sqlite3

# Connect to SQLite database (creates file if it doesn't exist)
conn = sqlite3.connect('students.db')
cursor = conn.cursor()

# Create table if it doesn't exist
cursor.execute('''CREATE TABLE IF NOT EXISTS students
                  (id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, age INTEGER)''')

# Function to add a new student
def add_student(name, age):
    cursor.execute('INSERT INTO students (name, age) VALUES (?, ?)', (name, age))
    conn.commit()
    print("Student added successfully!")

# Function to display all students
def view_students():
    cursor.execute('SELECT * FROM students')
    records = cursor.fetchall()
    print("\nID  | Name      | Age")
    print("----------------------")
    for record in records:
        print(f"{record[0]:<3} | {record[1]:<10} | {record[2]}")

# Adding a sample student
add_student('Alice', 20)

# Displaying all student records
view_students()

# Close the database connection
conn.close()
