#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>
#include <string>
#include "Task.h"

class FileManager {
public:
    static void saveToFile(const std::vector<Task>& tasks, const std::string& filename);
    static std::vector<Task> loadFromFile(const std::string& filename);
};

#endif