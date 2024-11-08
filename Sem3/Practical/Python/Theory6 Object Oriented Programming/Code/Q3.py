"""
Create a class called Numbers, which has a single class attribute called MULTIPLIER, and a constructor which takes the parameters x and y (these should all be numbers).
    1. Write a method called add which returns the sum of the attributes x and y.
    2. Write a class method called multiply, which takes a single number parameter a and
        returns the product of a and MULTIPLIER.
    3. Write a static method called subtract, which takes two number parameters, b and c,  and returns b - c.
    4. Write a method called value which returns a tuple containing the values of x and y. 
       Make this method into a property, and write a setter and a deleter for manipulating the values of x and y. (HOMEWORK)
"""

class Numbers:
    # Class attribute
    MULTIPLIER = 5

    # Constructor to initialize the instance attributes x and y
    def __init__(self, x, y):
        self._x = x
        self._y = y

    # 1. Method to add x and y
    def add(self):
        return self._x + self._y

    # 2. Class method to multiply a number with MULTIPLIER
    @classmethod
    def multiply(cls, a):
        return a * cls.MULTIPLIER

    # 3. Static method to subtract two numbers
    @staticmethod
    def subtract(b, c):
        return b - c

    # 4. Property to get the value of x and y as a tuple
    @property
    def value(self):
        return (self._x, self._y)

    # Setter for the value property to set x and y
    @value.setter
    def value(self, new_values):
        if isinstance(new_values, tuple) and len(new_values) == 2:
            self._x, self._y = new_values
        else:
            raise ValueError("Please provide a tuple with exactly two numerical values.")

    # Deleter for the value property to reset x and y
    @value.deleter
    def value(self):
        print("Deleting values of x and y...")
        self._x = 0
        self._y = 0

# Main function to test the Numbers class
if __name__ == "__main__":
    # Creating an instance of the Numbers class
    num = Numbers(10, 20)

    # Testing the add method
    print("Sum of x and y:", num.add())  # Output: 30

    # Testing the class method multiply
    print("Multiplication with MULTIPLIER:", Numbers.multiply(3))  # Output: 15 (3 * 5)

    # Testing the static method subtract
    print("Subtraction of 15 and 5:", Numbers.subtract(15, 5))  # Output: 10

    # Testing the property value (getter)
    print("Values of x and y:", num.value)  # Output: (10, 20)

    # Testing the property value (setter)
    num.value = (100, 200)
    print("Updated values of x and y:", num.value)  # Output: (100, 200)

    # Testing the property value (deleter)
    del num.value
    print("Values of x and y after deletion:", num.value)  # Output: (0, 0)
