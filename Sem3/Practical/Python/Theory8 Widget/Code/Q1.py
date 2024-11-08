# Configure the widget with various options like: bg=”red”, family=”times”, size=18 (IT LAB)
import tkinter as tk

# Create the main application window
root = tk.Tk()
root.title("Widget Configuration Example")
root.geometry("300x200")

# Configure a Label widget with specified options
label = tk.Label(
    root,
    text="Hello, Tkinter!",
    bg="red",          # Background color
    fg="white",        # Text color
    font=("Times", 18) # Font family and size
)

# Place the label on the window
label.pack(pady=20)

# Run the Tkinter event loop
root.mainloop()
