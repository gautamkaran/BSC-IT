# Theory9: Database Connection in Python

## Introduction

Database connection in Python allows an application to interact with databases and perform operations such as querying, inserting, updating, and deleting data. Python provides several libraries to establish a connection with various types of databases, such as SQLite, MySQL, PostgreSQL, etc. These libraries provide Python classes that represent databases, execute SQL commands, and return the results.

## Types of Databases in Python

Python can connect to multiple types of databases, and the two most commonly used libraries for connecting to databases are:
1. **SQLite**: A lightweight database engine that is embedded within Python and requires no separate server.
2. **MySQL**: A popular relational database management system that requires an external server.

## Connecting to SQLite Database

SQLite is a built-in database that comes with Python. To connect to an SQLite database, we can use the `sqlite3` module. The `sqlite3` module allows us to interact with SQLite databases directly without requiring a server.

### Steps to connect to an SQLite Database:

1. **Import the sqlite3 module**.
2. **Create a connection** using `sqlite3.connect()`.
3. **Create a cursor** object using `connection.cursor()`, which is used to execute SQL queries.
4. **Execute SQL queries** using the `cursor.execute()` method.
5. **Commit changes** to the database if you perform any insert, update, or delete operations.
6. **Close the connection** when done.

### Example: Connecting to SQLite Database

```python
import sqlite3

# Establish a connection to the SQLite database (or create one if it doesn't exist)
connection = sqlite3.connect('example.db')

# Create a cursor object
cursor = connection.cursor()

# Create a table
cursor.execute('''CREATE TABLE IF NOT EXISTS students (id INTEGER PRIMARY KEY, name TEXT, age INTEGER)''')

# Insert data
cursor.execute("INSERT INTO students (name, age) VALUES ('Alice', 22)")

# Commit changes
connection.commit()

# Query data
cursor.execute("SELECT * FROM students")
print(cursor.fetchall())

# Close the connection
connection.close()
```
Explanation:
- sqlite3.connect('example.db'): Establishes a connection to a database file example.db. If the file doesn't exist, it is created automatically.
- cursor.execute(): Executes SQL commands, such as creating tables or inserting data.
- connection.commit(): Commits any changes to the database (e.g., insertions).
- cursor.fetchall(): Retrieves all rows from the result of a SELECT query.

# Connecting to MySQL Database
To connect to a MySQL database, you need the mysql-connector-python library (or PyMySQL). This library allows you to establish a connection to a MySQL server and execute SQL commands.

Steps to connect to a MySQL Database:
 1. Install the mysql-connector-python library:
  ```bash
  pip install mysql-connector-python
 ```
1. Import the connector module.
2. Create a connection using mysql.connector.connect().
3. Create a cursor object using connection.cursor().
4. Execute SQL queries using the cursor.
5. Commit changes to the database.
6. Close the connection.

```python
import mysql.connector

# Establish a connection to the MySQL database
connection = mysql.connector.connect(
    host="localhost",
    user="root",
    password="password",
    database="test_db"
)

# Create a cursor object
cursor = connection.cursor()

# Create a table
cursor.execute('''CREATE TABLE IF NOT EXISTS students (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(100), age INT)''')

# Insert data
cursor.execute("INSERT INTO students (name, age) VALUES ('Bob', 24)")

# Commit changes
connection.commit()

# Query data
cursor.execute("SELECT * FROM students")
print(cursor.fetchall())

# Close the connection
connection.close()
```
**Explanation:**
1. mysql.connector.connect(): Establishes a connection to the MySQL server using parameters like host, user, password, and database.
2. cursor.execute(): Executes SQL commands such as creating tables, inserting data, etc.
3. connection.commit(): Commits the transaction to the database.
4. cursor.fetchall(): Retrieves the results of a SELECT query.