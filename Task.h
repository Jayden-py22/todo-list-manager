#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
    std::string description;

public:
    Task() = default;
    Task(const std::string& desc);
    std::string getDescription() const;
};

#endif