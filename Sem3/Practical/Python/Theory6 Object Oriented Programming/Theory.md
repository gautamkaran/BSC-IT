## 1. Introduction to OOP

Object-Oriented Programming (OOP) is a programming paradigm that organizes software design around data, or objects, rather than functions and logic. Objects are instances of classes, which define the properties (attributes) and behaviors (methods) of the object. OOP helps to create modular, reusable, and maintainable code. Python, being an object-oriented language, supports OOP principles.

The four main principles of OOP in Python are:
- Classes and Objects
- Encapsulation
- Inheritance
- Polymorphism

## 2. Classes and Objects

### What is a Class?
A class is a blueprint for creating objects (a specific data structure), defining the properties (attributes) and methods (functions) that the object will have.

### Creating a Class
```python
class Car:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model

    def display_info(self):
        print(f"Car: {self.brand} {self.model}")
```

## What is an Object?
An object is an instance of a class. Objects have attributes and methods defined by the class.

### Creating an Object

```python
my_car = Car("Tesla", "Model 3")
my_car.display_info()  # Output: Car: Tesla Model 3
```
## 3. Encapsulation
### What is Encapsulation?
Encapsulation is the concept of restricting direct access to certain attributes or methods in a class, ensuring the data is protected. In Python, this can be achieved by using private variables (with double underscores).

**Example of Encapsulation**
```python
class BankAccount:
    def __init__(self, owner, balance):
        self.owner = owner
        self.__balance = balance  # Private attribute

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance

account = BankAccount("Alice", 1500)
account.deposit(500)
print(account.get_balance())  # Output: 2000
```
Here, the __balance attribute is private and cannot be accessed directly outside the class.

## 4. Inheritance
### What is Inheritance?
Inheritance allows one class (child class) to inherit the attributes and methods from another class (parent class). This promotes code reusability.

**Example of Inheritance**
```python
class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        print("This animal makes a sound.")

class Dog(Animal):
    def speak(self):
        print(f"{self.name} says woof!")

dog = Dog("Rex")
dog.speak()  # Output: Rex says woof!
```
Here, the Dog class inherits from the Animal class and overrides the speak() method.

## 5. Polymorphism

### What is Polymorphism?
Polymorphism allows different classes to be treated as instances of the same class through inheritance. It enables the use of the same method name to behave differently based on the object it is acting on.

**Example of Polymorphism**

```python
class Bird:
    def fly(self):
        print("Birds can fly.")

class Ostrich(Bird):
    def fly(self):
        print("Ostriches cannot fly.")

bird = Bird()
ostrich = Ostrich()

for animal in (bird, ostrich):
    animal.fly()

# Output:
# Birds can fly.
# Ostriches cannot fly.
```
The fly method is polymorphic, behaving differently for Bird and Ostrich.

## 6. Abstraction

### What is Abstraction?
Abstraction hides the complex implementation details from the user and exposes only the essential features. This is done by creating abstract classes and methods that define the interface but not the implementation.

**Example of Abstraction**
```python
from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass

class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

rectangle = Rectangle(5, 10)
print(rectangle.area())  # Output: 50
```
In this example, the Shape class is abstract, meaning it cannot be instantiated, and the area() method is abstract, meaning it must be implemented by any subclass.

