"""
Write a program to change the widget type and configuration options to experiment with other widget types like Message, Button, Entry, Checkbutton, Radiobutton, Scale etc. (HOMEWORK)
"""
import tkinter as tk

# Create the main application window
root = tk.Tk()
root.title("Small Widget Experiment")
root.geometry("300x300")

# Button widget
button = tk.Button(root, text="Click Me", bg="blue", fg="white", font=("Arial", 12))
button.pack(pady=10)

# Entry widget
entry = tk.Entry(root, font=("Arial", 14))
entry.pack(pady=10)

# Label widget
label = tk.Label(root, text="This is a label", font=("Arial", 12), bg="yellow")
label.pack(pady=10)

# Checkbutton widget
check_var = tk.IntVar()
checkbutton = tk.Checkbutton(root, text="Agree", variable=check_var)
checkbutton.pack(pady=10)

# Run the Tkinter event loop
root.mainloop()
