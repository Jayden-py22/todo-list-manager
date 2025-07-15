#include "Task.h"

Task::Task(const std::string& desc) : description(desc) {}

std::string Task::getDescription() const {
    return description;
}