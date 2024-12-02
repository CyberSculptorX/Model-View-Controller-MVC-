#pragma once

#include "User.h"
#include <vector>
#include <iostream>
#include <string>

/**
 * @class UserView
 * @brief Provides methods for displaying user-related information and interacting with the user.
 */
class UserView {
public:
    /**
     * @brief Displays a single User object.
     *
     * Prints the name, role, and email of the provided User object to the console.
     *
     * @param user The User object to display information for.
     */
    void displayUser(const User& user);

    /**
     * @brief Displays all users in the system.
     *
     * Prints the name, role, and email of each User object in the provided vector to the console.
     *
     * @param users The vector of User objects to display information for.
     */
    void displayAllUsers(const std::vector<User>& users);

    /**
     * @brief Displays the main menu options.
     *
     * Prints the available options to the console and prompts the user to choose an option.
     */
    void displayMenu();

    /**
     * @brief Displays a message to the console.
     *
     * Prints the provided message to the console.
     *
     * @param message The message to display.
     */
    void displayMessage(const std::string& message);

    /**
     * @brief Prompts the user for input.
     *
     * Prints a prompt to the console and reads a line of input from the user into the provided string.
     *
     * @param prompt The prompt to display to the user.
     * @param input The string to read user input into.
     */
    void promptForInput(const std::string& prompt, std::string& input);
};