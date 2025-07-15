# To-Do List Manager

A console-based To-Do List application built in C++ as a demonstration project for a C++ programming Sprint.  
The program allows users to add, view, and delete tasks, and also saves tasks to a file for persistence between sessions.

## Features

- Add a new task
- View all tasks
- Delete a task
- Save tasks to a file (`tasks.txt`)
- Load tasks from the file on program startup

## Technologies Used

- C++17
- Object-Oriented Programming (Classes)
- Standard Template Library (STL `vector`)
- File I/O (`ifstream`, `ofstream`)
- Modular design with multiple `.cpp` and `.h` files

## Requirements Demonstrated

- Conditionals (`if`, `switch`)
- Loops (`while`, `for`)
- Functions (`addTask()`, `viewTasks()`, etc.)
- Classes (`Task`, `TaskManager`)
- STL Container: `std::vector`
- Stretch Challenge: File read/write implemented via `FileManager`

## Project Structure
todo-list-manager/
├── main.cpp
├── Task.h / Task.cpp
├── TaskManager.h / TaskManager.cpp
├── FileManager.h / FileManager.cpp
├── tasks.txt
├── LICENSE
└── README.md
## How to Compile
Make sure you have a C++ compiler (like g++) installed. Then run:

```bash
g++ -std=c++17 main.cpp Task.cpp TaskManager.cpp FileManager.cpp -o todo
./todo