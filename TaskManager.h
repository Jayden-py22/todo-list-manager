#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include "Task.h"

class TaskManager {
private:
    std::vector<Task> tasks;
    const std::string filename = "tasks.txt";

public:
    void loadTasks();
    void saveTasks();
    void addTask();
    void viewTasks() const;
    void deleteTask();
};

#endif