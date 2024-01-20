#include <iostream>

int main() {
    const int maxGrades = 100;  // Maximum number of grades that can be entered
    int grades[maxGrades];      // Array to store the grades
    int numGrades = 0;          // Number of grades entered so far
    int grade;                  // Temporary variable to store each grade entered by the user

    // Input loop to get grades
    while (true) {
        std::cout << "Enter grade (or -1 to end): ";
        std::cin >> grade;

        if (grade == -1) {
            break; // Exit the loop when -1 is entered
        }

        // Store the grade in the array if there is room
        if (numGrades < maxGrades) {
            grades[numGrades] = grade;
            numGrades++;
        } else {
            std::cout << "Maximum number of grades reached (100). Exiting input.\n";
            break;
        }
    }

    // Calculate the average
    if (numGrades > 0) {
        int sum = 0;
        for (int i = 0; i < numGrades; i++) {
            sum += grades[i];
        }
        double average = static_cast<double>(sum) / numGrades;  // Calculate the average as a double
        std::cout << "Average: " << average << std::endl;
    } else {
        std::cout << "No grades entered." << std::endl;  // If no grades were entered
    }

    return 0;  // Return 0 to indicate successful execution
}
