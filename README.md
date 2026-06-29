# Mini Database System in C

A lightweight database management system built in C without using any external database engine.
This project simulates a simple student database using structures and file handling to store and manage data permanently.

## Project Overview

The goal of this project is to build a mini database system that allows users to manage student records through a command-line interface.

The project focuses on understanding:

* Data organization
* File storage
* Memory management
* Modular programming in C

## Features

* Add new students
* Display all students
* Search for a student
* Update student information
* Delete student records
* Save data permanently using files
* Load existing data when starting the program

## Technologies Used

* C Programming Language
* Structures (struct)
* File Handling
* Pointers
* Dynamic Memory Management
* Modular Programming

## Project Structure

```
Mini-Database-System/
│
├── src/
│   ├── main.c
│   ├── student.c
│   └── student.h
│
├── data/
│   └── students.txt
│
├── README.md
└── .gitignore
```

## Concepts Practiced

This project helps practice:

* Creating and manipulating structures
* Reading and writing files
* Searching and updating stored data
* Separating code into multiple files
* Building a complete C application from scratch

## Future Improvements

Possible upgrades:

* Add authentication system
* Add sorting functionality
* Support multiple types of records
* Improve user interface
* Add data encryption
* Create a graphical interface

## How to Run

Compile the project:

```bash
gcc src/*.c -o database
```

Run:

```bash
./database
```

## Author

Created as a Computer Science project to improve C programming skills and understand how database systems work internally.
