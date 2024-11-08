
# Theory8: Widgets in Python (Tkinter)

## Introduction

In Python, Tkinter is the standard GUI (Graphical User Interface) library. It provides a wide range of widgets, which are elements of the GUI that allow users to interact with the application. Widgets in Tkinter are the building blocks for creating interactive applications. They can be buttons, labels, entry fields, checkboxes, radio buttons, and more.

## Types of Widgets in Tkinter

Tkinter provides several types of widgets that serve different purposes in GUI applications. Below are some commonly used widgets:

### 1. **Label Widget**
The `Label` widget is used to display text or images. It is a non-interactive widget and is commonly used to show information to the user.

Example:
```python
label = tk.Label(root, text="Hello, Tkinter!")
label.pack()
```

### 2. **Button Widget**
The `Button` widget is used to create buttons that users can click. Buttons can be configured with various properties such as text, color, and size, and can trigger functions when clicked.

Example:
```python
button = tk.Button(root, text="Click Me", command=my_function)
button.pack()
```

### 3. **Entry Widget**
The `Entry` widget is used to accept single-line text input from the user. It is commonly used for forms or where the user needs to type data.

Example:
```python
entry = tk.Entry(root)
entry.pack()
```

### 4. **Checkbutton Widget**
The `Checkbutton` widget allows users to select or deselect an option using a checkbox. It is commonly used for boolean choices like "Yes" or "No".

Example:
```python
check_var = tk.IntVar()
checkbutton = tk.Checkbutton(root, text="Agree", variable=check_var)
checkbutton.pack()
```

### 5. **Radiobutton Widget**
The `Radiobutton` widget allows users to choose one option from a set of choices. It is commonly used when only one option should be selected from a group.

Example:
```python
var = tk.StringVar()
radio1 = tk.Radiobutton(root, text="Option 1", variable=var, value="1")
radio2 = tk.Radiobutton(root, text="Option 2", variable=var, value="2")
radio1.pack()
radio2.pack()
```

### 6. **Scale Widget**
The `Scale` widget allows users to select a value from a range by sliding a bar. This widget is useful for numeric input, such as selecting a volume level or a percentage.

Example:
```python
scale = tk.Scale(root, from_=0, to=100, orient="horizontal")
scale.pack()
```

### 7. **Listbox Widget**
The `Listbox` widget is used to display a list of options from which the user can select one or more.

Example:
```python
listbox = tk.Listbox(root)
listbox.insert(1, "Option 1")
listbox.insert(2, "Option 2")
listbox.pack()
```

### 8. **Text Widget**
The `Text` widget is used for multi-line text input and display. It can handle large amounts of text and allows users to type and edit the text.

Example:
```python
text = tk.Text(root, height=5, width=30)
text.pack()
```

### 9. **Message Widget**
The `Message` widget is similar to the `Label` widget but is used to display longer pieces of text. It is useful for showing multiple lines of text or paragraphs.

Example:
```python
message = tk.Message(root, text="This is a message widget", width=200)
message.pack()
```
