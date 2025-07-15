#include "TaskManager.h"
#include "FileManager.h"
#include <iostream>

void TaskManager::loadTasks() {
    tasks = FileManager::loadFromFile(filename);
}

void TaskManager::saveTasks() {
    FileManager::saveToFile(tasks, filename);
}

void TaskManager::addTask() {
    std::string desc;
    std::cout << "Enter task description: ";
    std::getline(std::cin, desc);
    tasks.emplace_back(desc);
    std::cout << "Task added.\n";
}

void TaskManager::viewTasks() const {
    if (tasks.empty()) {
        std::cout << "No tasks found.\n";
        return;
    }
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i].getDescription() << "\n";
    }
}

void TaskManager::deleteTask() {
    viewTasks();
    std::cout << "Enter task number to delete: ";
    int index;
    std::cin >> index;
    std::cin.ignore(); // clear newline

    if (index > 0 && index <= static_cast<int>(tasks.size())) {
        tasks.erase(tasks.begin() + index - 1);
        std::cout << "Task deleted.\n";
    } else {
        std::cout << "Invalid number.\n";
    }
}