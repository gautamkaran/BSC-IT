"""
Open a new file in IDLE (“New Window” in the “File” menu) and save it as geometry.py in the directory where you keep the files you create for this course. Then copy the functions you wrote for calculating volumes and areas in the “Control Flow and Functions” exercise into this file and save it.
Now open a new file and save it in the same directory. You should now be able to import your own module like this:
import geometry 
20

Try and add print dir(geometry) to the file and run it.
Now write a function pointyShapeVolume(x, y, squareBase) that calculates the volume of a square pyramid if squareBase is True and of a right circular cone if squareBase is False. x is the length of an edge on a square if squareBase is True and the radius of a circle when squareBase is False. y is the height of the object. First use squareBase to distinguish the cases. Use the circleArea and squareArea from the geometry module to calculate the base areas. (HOMEWORK)

"""

# Import the custom geometry module
import geometry

# Display all the attributes and methods of the geometry module
print(dir(geometry))

# Function to calculate the volume of a square pyramid or a right circular cone
def pointyShapeVolume(x, y, squareBase):
    if squareBase:
        # If squareBase is True, calculate the volume of a square pyramid
        base_area = geometry.squareArea(x)
        volume = (1/3) * base_area * y
        shape = "Square Pyramid"
    else:
        # If squareBase is False, calculate the volume of a right circular cone
        base_area = geometry.circleArea(x)
        volume = (1/3) * base_area * y
        shape = "Right Circular Cone"
    
    print(f"The volume of the {shape} is: {volume:.2f}")
    return volume

# Testing the function
if __name__ == "__main__":
    # Example 1: Square Pyramid
    pointyShapeVolume(5, 10, True)

    # Example 2: Right Circular Cone
    pointyShapeVolume(7, 12, False)
