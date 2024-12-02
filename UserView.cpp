#include "UserView.h"

/**
 * @brief Displays user information.
 *
 * Prints the name, role, and email of a given User object to the console.
 *
 * @param user The User object to display information for.
 */
void UserView::displayUser(const User& user) {
    std::cout << "User: " << user.getName() << "\nRole: " << user.getRole() << "\nEmail: " << user.getEmail() <<
        "\n";
}

/**
 * @brief Displays a list of all users.
 *
 * Prints the name, role, and email of each User object in the provided vector to the console.
 *
 * @param users The vector of User objects to display information for.
 */
void UserView::displayAllUsers(const std::vector<User>& users) {
    // Header for user list display
    std::cout << "\n--- User List ---\n";
    std::cout << "Name\t\tRole\t\tEmail\n";
    std::cout << "-------------------------------------------\n";

    // Loop through each user and print their information
    for (const auto& user : users) {
        std::cout << user.getName() << "\t" << user.getRole() << "\t" << user.getEmail() << "\n";
    }

    // Footer for user list display
    std::cout << "\n";
}

/**
 * @brief Displays the main menu.
 *
 * Prints the available options to the console and prompts the user to choose an option.
 */
void UserView::displayMenu() {
    // Header for menu display
    std::cout << "\n--- User Management System ---\n";

    // Print menu options
    std::cout << "1. Add User\n";
    std::cout << "2. Update User Role\n";
    std::cout << "3. Display User\n";
    std::cout << "4. List All Users\n";
    std::cout << "5. Remove User\n";

    // Options 6 and 7 were not in the original code snippet, but are included here for completeness
    std::cout << "7. List Users by Role\n";
    std::cout << "6. Exit\n";

    // Prompt user to choose an option
    std::cout << "Choose an option: ";
}

/**
 * @brief Displays a message to the console.
 *
 * Prints the provided message to the console.
 *
 * @param message The message to display.
 */
void UserView::displayMessage(const std::string& message) {
    std::cout << message << std::endl;
}

/**
 * @brief Prompts the user for input.
 *
 * Prints a prompt to the console and reads a line of input from the user into the provided string.
 *
 * @param prompt The prompt to display to the user.
 * @param input The string to read user input into.
 */
void UserView::promptForInput(const std::string& prompt, std::string& input) {
    // Display prompt
    std::cout << prompt;

    // Read user input
    std::getline(std::cin, input);
}