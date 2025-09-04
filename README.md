=> Overview

This project implements an Arbitrary Precision Calculator capable of performing arithmetic operations on very large integers that cannot be handled by standard data types (e.g., int, long).
The calculator uses a linked list data structure to store numbers digit by digit, enabling efficient handling of numbers with hundreds or thousands of digits.

---

=> Features

Supports very large integers (no fixed size limit)
Addition of two large numbers
Subtraction of large numbers
Multiplication (optional if implemented)
Division (optional if implemented)
Efficient representation using singly/doubly linked lists

---

=> Technologies Used

Programming Language: C
Data Structure: Linked List
Concepts: Dynamic memory allocation, pointers, modular programming

---

=> Project Structure

Arbitrary-Precision-Calculator/
│── main.c             # Entry point
│── apc.h             # Header file
│── addition.c         # Handles addition logic
│── subtraction.c      # Handles subtraction logic
│── multiplication.c   # Handles multiplication logic
│── division.c         # Handles division logic (if implemented)
│──digit_to_list.c     # add each digit of number to linked list
│──digit_to_list.h     # header file
│── calculator.h       # Header file with function declarations
│── README.md          # Documentation


---

=> How to Run

1. Clone the repository:

git clone https://github.com/<your-username>/Arbitrary-Precision-Calculator.git
cd Arbitrary-Precision-Calculator


2. Compile the program:

gcc main.c addition.c subtraction.c multiplication.c division.c -o calculator


3. Run the program:

./calculator

---

=> Learning Outcomes

Deep understanding of linked list data structures
Handling dynamic memory allocation in C
Implementation of big integer arithmetic
Modular program design
