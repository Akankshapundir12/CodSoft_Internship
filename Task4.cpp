//TASK 4
// TO-DO LIST
/** Build a simple console-based to-do list manager that allows users to add, view, and delete tasks.
 
*Task Input: Allow users to input tasks they want to add to the list.
* Add Task: Implement a function to add tasks to the list.
* View Tasks: Display the list of tasks with their status (completed or pending).
* Mark Task as Completed: Allow users to mark tasks as completed.
* Remove Task: Provide an option to remove tasks from the list.   - By Akanksha Pundir **/

#include <iostream>
#include <vector>
using namespace std;
struct Task {
    std::string description;
    bool completed;
};

class ToDoList {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& description) {
        Task task;
        task.description = description;
        task.completed = false;
        tasks.push_back(task);
        std::cout << "Task added successfully!" << std::endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            std::cout << "No tasks to display." << std::endl;
        } else {
            std::cout << "Tasks:" << std::endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                std::cout << "[" << (tasks[i].completed ? "X" : " ") << "] "
                          << i + 1 << ". " << tasks[i].description << std::endl;
            }
        }
    }

    void deleteTask(int index) {
        if (index >= 1 && index <= static_cast<int>(tasks.size())) {
            tasks.erase(tasks.begin() + index - 1);
            std::cout << "Task deleted successfully!" << std::endl;
        } else {
            std::cout << "Invalid task index." << std::endl;
        }
    }
};

int main() {
    
    cout<<"\n\t<---------------------  CODSOFT INTERNSHIP  -------------------->"<<endl;
	cout<<"\n\t*****************************************************************";
	cout<<endl;
	cout<<endl;
	cout<<"\n\t\t\t***********  TASK 4  ***********\n";

	cout << "\n\t\t\tWelcome to TO-DO-LIST!!"
		<< endl; 
    ToDoList todoList;
    int choice;

    do {
        std::cout << "\nToDo List Manager\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Delete Task\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cin.ignore(); // Clear newline character from the previous input
                std::string taskDescription;
                std::cout << "Enter task description: ";
                std::getline(std::cin, taskDescription);
                todoList.addTask(taskDescription);
                break;
            }
            case 2: {
                todoList.viewTasks();
                break;
            }
            case 3: {
                int taskIndex;
                std::cout << "Enter the task index to delete: ";
                std::cin >> taskIndex;
                todoList.deleteTask(taskIndex);
                break;
            }
            case 4: {
                std::cout << "Goodbye!" << std::endl;
                break;
            }
            default: {
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
            }
        }

    } while (choice != 4);

    return 0;
}
