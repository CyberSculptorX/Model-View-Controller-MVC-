// File: UserController.cpp

#include "UserController.h"
#include <vector>

void UserController::addUser(const std::string& name, const std::string& role, const std::string& email) {
    // Check if user already exists before adding a new one
    for (const User& user : users) {
        if (user.getName() == name) {
            view.displayMessage("User " + name + " already exists.");
            return;
        }
    }
    users.push_back(User(name, role, email));
    view.displayMessage("User " + name + " added.");
}

void UserController::updateUserRole(const std::string& name, const std::string& newRole) {
    // Update user's role if found
    for (User& user : users) {
        if (user.getName() == name) {
            user.setRole(newRole);
            view.displayMessage("Updated " + name + "'s role to " + newRole + ".");
            return;
        }
    }
    view.displayMessage("User " + name + " not found.");
}

void UserController::displayUser(const std::string& name) {
    // Display user's info if found
    for (const User& user : users) {
        if (user.getName() == name) {
            view.displayUser(user);
            return;
        }
    }
    view.displayMessage("User " + name + " not found.");
}

void UserController::listAllUsers() {
    // Display all users if any
    if (users.empty()) {
        view.displayMessage("No users found.");
        return;
    }
    view.displayAllUsers(users);
}

void UserController::listUsersByRole(const std::string& role) {
    // Filter users by role
    std::vector<User> filteredUsers;
    for (const User& user : users) {
        if (user.getRole() == role) {
            filteredUsers.push_back(user);
        }
    }

    // Display filtered users if any
    if (filteredUsers.empty()) {
        view.displayMessage("No users with the role " + role + " found.");
    }
    else {
        view.displayAllUsers(filteredUsers);
    }
}

void UserController::removeUser(const std::string& name) {
    // Remove user if found
    bool removed = false;
    for (size_t i = 0; i < users.size(); i++) {
        if (users[i].getName() == name) {
            users.erase(users.begin() + i);
            view.displayMessage("User " + name + " removed.");
            removed = true;
            break;
        }
    }
    if (!removed) {
        view.displayMessage("User " + name + " not found.");
    }
}

void UserController::runProgram() {
    char choice;

    // Loop until user chooses to exit
    do {
        std::string userInput;
        view.displayMenu();
        view.promptForInput("Enter Choice>> ", userInput);

        choice = userInput[0];

        switch (choice) {
        case '1': { // Add new user
            std::string name, role, email;
            view.promptForInput("Enter name: ", name);
            view.promptForInput("Enter role: ", role);
            view.promptForInput("Enter email: ", email);
            addUser(name, role, email);
            break;
        }
        case '2': { // Update user's role
            std::string name, newRole;
            view.promptForInput("Enter name of user to update: ", name);
            view.promptForInput("Enter new role: ", newRole);
            updateUserRole(name, newRole);
            break;
        }
        case '3': { // Display user's info
            std::string name;
            view.promptForInput("Enter name of user to display: ", name);
            displayUser(name);
            break;
        }
        case '4':
            listAllUsers();
            break;
        case '5': { // Remove user
            std::string name;
            view.promptForInput("Enter name of user to remove: ", name);
            removeUser(name);
            break;
        }
        case '7': { // List users by role
            std::string role;
            view.promptForInput("Enter role to search: ", role);
            listUsersByRole(role);
            break;
        }
        case '6':
            view.displayMessage("Exiting the program.");
            break;
        default:
            view.displayMessage("Invalid choice. Please try again.");
        }
    } while (choice != '6');
}