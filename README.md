# C++ Experiment 7: To Study and Implement Arrays and Strings

---

## Aim
To:
1. Understand the use of arrays and string manipulation in C++.
2. Implement logic to input, store, and process arrays of numbers and characters.
3. Perform operations like searching, finding maximum/minimum, calculating sum and average on arrays.
4. Manipulate C-style strings using standard library functions.

---

## Tool Used
VS Code or Programiz Online C++ Compiler.

---

## Objectives
- To understand the structure and syntax of arrays and strings in C++.
- To use arrays for storing multiple values and perform data operations like searching and sorting.
- To solve logic-based problems like searching for a value, computing sum/average, and string comparison.
- To validate user inputs and manage limited memory safely.

---

## Theory

### Why C++ is More Efficient than C
Object-Oriented Features: C++ supports classes, inheritance, and encapsulation, making code more modular and reusable.

Standard Template Library (STL): Provides built-in implementations for strings, arrays, vectors, and algorithms, reducing manual work.

Function Overloading: C++ allows defining multiple functions with the same name but different parameters, improving readability.

Better Memory Management: Supports constructors, destructors, and smart pointers for managing memory safely.

String Handling: std::string in C++ is more flexible and safer compared to C’s character arrays.


### 1. Arrays in C++
An array is a collection of elements of the same data type stored in contiguous memory locations. Arrays allow random access using indexing and are ideal for storing fixed-size sequential data.

**Syntax:**
```cpp
datatype arrayName[size];

int arrayName[4*number];//int
```

**Characteristics:**
- Fixed size
- Same type of elements
- Indexed from 0 to size - 1

**Use Cases of Arrays**
- **Data Storage**: Arrays are used to store multiple values of the same data type efficiently in memory.
- **Sensor Data Logging**: Frequently used in embedded systems to collect and store sensor readings.
- **Matrix Operations**: Arrays form the basis of matrices used in image processing, scientific computing, and simulations.
- **Sorting and Searching**: Algorithms like bubble sort, binary search, etc., operate on arrays.
- **Menu Systems**: Arrays help implement fixed options or commands in user-driven programs.
- **Statistical Calculations**: Arrays simplify operations like finding average, median, max, and min from a data set.
- **Game Development**: Arrays store player scores, map coordinates, and game states.
- **Buffer Management**: Arrays are used in managing memory buffers in communication protocols.


---

### 2. Strings in C++
A C-style string is an array of characters ending with a null terminator `'\0'`. String operations can be done using functions provided in the `<cstring>` header.

**Syntax:**
```cpp
char str[20]; // declaration
cin >> str;   // input
```

**<cstring> Functions:**
| Function   | Description                          |
|------------|--------------------------------------|
| `strlen()` | Returns the length of the string     |
| `strcpy()` | Copies one string to another         |
| `strcat()` | Concatenates two strings             |
| `strcmp()` | Compares two strings (returns 0 if equal) |
| `strchr()` | Finds first occurrence of a character|
| `strstr()` | Finds first occurrence of a substring|

**Characteristics:**
- Limited by array size
- Requires proper memory handling
- Simple for fixed-length names or passwords

**Use Cases of Strings**
- **User Information Handling**: Names, addresses, and other text data are stored and manipulated as strings.
- **Text Processing**: Strings are used to analyze and modify textual content in applications like search engines and spell checkers.
- **Communication Systems**: Protocols often involve sending and receiving string-based messages.
- **File Handling**: File names, paths, and content often require string operations.
- **Data Validation**: Strings help validate inputs like email IDs, passwords, and command formats.
- **UI/UX Elements**: Labels, buttons, error messages, and other interface text use string manipulation.
- **Programming Logic**: Strings are used in switch-case or if-else conditions based on user input or file content.

---

## Concepts Used
- 1D arrays for storing numeric data.
- Basic array operations: maximum, minimum, sum, average.
- Searching through arrays using loops.
- `if-else` and `switch` for logical branching.
- Loop control structures (`for`).
- Input validation based on array size limits.

---

## Program Description

- **Program 1 Array Input and Validation**
  - Accepts number of elements from user (between 1 and 20).
  - Validates input to prevent array overflow.
  - Stores user input values in an integer array.

- **Program 2 Array Display**
  - Prints all entered elements in the array using a loop.

- **Program 3 Maximum and Minimum Element Finder**
  - Prompts user to choose between finding max or min.
  - Uses conditional logic to traverse array and find the required value.

- **Program 4 Finding number in given array**
  - Prompts user to enter a value to search for in the array.
  - Uses a loop to compare each element with the target.
  - Returns the index if found, or an appropriate message if not.

- **Program 5 Sum and Average of array**
  - Accepts another array of elements from user.
  - Calculates the total sum using a loop.
  - Divides by count to compute average.
  - Displays both sum and average values.

- **Program 6 String Reverse**
  - Accepts a single word from the user.
  - Uses the `.length()` method to calculate the length of the string.
  - Traverses the string in reverse using a loop.
  - Outputs the reversed string to the console.

- **Program 7 String Palindrome Check**
  - Takes a word input from the user.
  - Compares characters from both ends using a loop (from `0` to `length/2`).
  - Checks if the word is the same forwards and backwards.
  - Displays `"Palindrome"` if the condition holds, otherwise prints `"Not a palindrome"`.

- **Program 8 String Concatenation**
  - Accepts two words from the user.
  - Uses the `+` operator to concatenate the strings.
  - Displays the combined result.
    
---

## Sample output: 
program 1 


```
