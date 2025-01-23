# Random Student Selector

A simple C program to randomly select a student from a list provided in a text file. This can be used by teachers or anyone who needs to pick a random name from a group.

## Features
- Load student names from a text file.
- Randomly selects one name from the loaded list.
- Handles up to 100 student names by default (configurable via `MAX_STUDENTS` constant).

## Files
### 1. `main.c`
The main program file that:
- Reads the file name from the user.
- Loads student names into memory.
- Randomly selects a student and displays their name.

### 2. `random_student_selector.h`
The header file that:
- Defines constants and function prototypes used in the program.
- Ensures modularity and code clarity.

### 3. `students.txt` (example)
A sample file containing a list of student names, one per line. Example:
