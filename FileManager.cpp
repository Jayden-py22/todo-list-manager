#include "FileManager.h"
#include <fstream>

void FileManager::saveToFile(const std::vector<Task>& tasks, const std::string& filename) {
    std::ofstream out(filename);
    for (const auto& task : tasks) {
        out << task.getDescription() << "\n";
    }
}

std::vector<Task> FileManager::loadFromFile(const std::string& filename) {
    std::vector<Task> tasks;
    std::ifstream in(filename);
    std::string line;
    while (std::getline(in, line)) {
        if (!line.empty()) {
            tasks.emplace_back(line);
        }
    }
    return tasks;
}