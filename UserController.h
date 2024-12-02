// File: UserController.h

#pragma once

#include "User.h"
#include "UserView.h"
#include <vector>
#include <algorithm>

/**
 * @class UserController
 *  Manages user data and provides methods for interacting with users.
 */
class UserController {
private:
    std::vector<User> users;  // Store all users in a vector
    UserView view;           // View object to display user information

public:
    /**
     *  Adds a new user to the system.
     *
     *  name User's name
     *  role User's role
     *  email User's email
     */
    void addUser(const std::string& name, const std::string& role, const std::string& email);

    /**
     *  Updates a user's role.
     *
     *  name User's name
     *  newRole New user role
     */
    void updateUserRole(const std::string& name, const std::string& newRole);

    /**
     *  Displays information about a specific user.
     *
     *  name User's name
     */
    void displayUser(const std::string& name);

    /**
     *  Lists all users in the system.
     */
    void listAllUsers();

    /**
     *  Lists users by role.
     *
     *  role Role to filter users by
     */
    void listUsersByRole(const std::string& role);

    /**
     *  Removes a user from the system.
     *
     *  name User's name
     */
    void removeUser(const std::string& name);

    /**
     *  Runs the program.
     */
    void runProgram();
};