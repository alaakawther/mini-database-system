# Mini Database System in C

A lightweight student database management system built in C using file-based storage.

This project simulates a simple database system that allows users to manage student records through a command-line interface without using any external database engine.

---

## Overview

The goal of this project is to understand the fundamentals behind database systems by implementing data storage and management manually using C.

The application uses structures to represent student records and files to store data permanently.

---

## Features

- Add new students
- Display student records
- Store data permanently using files
- Load existing records
- Menu-based command-line interface

---

## Technologies Used

- C Programming Language
- Structures
- File Handling
- Pointers
- Modular Programming
- Git

---

## Project Structure
Mini-Database-System/

├── src/
│ ├── main.c
│ ├── student.c
│ └── student.h
│
├── data/
│ └── students.txt
│
├── README.md
└── .gitignore

---

## How It Works

The program is divided into modules:

- `main.c`
  - Handles the user menu and program flow.

- `student.h`
  - Defines the student structure and function prototypes.

- `student.c`
  - Implements student management operations and file handling.

- `students.txt`
  - Stores student information permanently.

---

## Development Process

### Day 1 - Project Setup

- Created project structure
- Designed student data model
- Set up Git repository

### Day 2 - File Management

- Implemented writing and reading data from files
- Added permanent storage system

### Day 3 - Student Management System

- Added student creation functionality
- Added student display functionality
- Improved code organization using multiple files

### Day 4 - Finalization

- Improved documentation
- Cleaned project structure
- Prepared the project for future extensions

---

## What I Learned

- How to organize a C project using multiple files
- How structures represent real-world data
- How file handling enables data persistence
- How basic database concepts work internally
- How to manage projects using Git

---

## Future Improvements

- Add search functionality
- Add update and delete operations
- Add sorting features
- Replace file storage with SQLite database
- Create a graphical user interface
- Add automated testing

---

## How to Run

Compile:

```bash
gcc src/*.c -o database
Run:

./student_system
## Author

Created by Alaa Zaiter.
Developed as a personal project to practice C programming and database concepts.
