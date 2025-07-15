#include <iostream>
#include "TaskManager.h"

int main() {
    TaskManager manager;
    manager.loadTasks();

    int choice;
    do {
        std::cout << "\nTo-Do List Menu:\n";
        std::cout << "1. View Tasks\n2. Add Task\n3. Delete Task\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // clear newline

        switch (choice) {
            case 1:
                manager.viewTasks();
                break;
            case 2:
                manager.addTask();
                break;
            case 3:
                manager.deleteTask();
                break;
            case 4:
                manager.saveTasks();
                std::cout << "Exiting. Tasks saved.\n";
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}