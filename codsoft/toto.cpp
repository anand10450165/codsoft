#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> tasks;
    int choice;
    std::string task;

    while (true) {
        std::cout << "1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter task: ";
            std::cin.ignore();
            std::getline(std::cin, task);
            tasks.push_back(task);
        } else if (choice == 2) {
            for (int i = 0; i < tasks.size(); ++i) {
                std::cout << i + 1 << ": " << tasks[i] << std::endl<<"\n";
            }
        } else if (choice == 3) {
            int index;
            std::cout << "Enter task number to delete: ";
            std::cin >> index;
            if (index > 0 && index <= tasks.size()) {
                tasks.erase(tasks.begin() + index - 1);
            } else {
                std::cout << "Invalid task number.\n";
            }
        } else if (choice == 4) {
            break;
        } else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }
}


