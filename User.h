// File: User.h

#pragma once
#include <string>

/**
 * @class User
 * @brief Represents a user in the system.
 */
class User {
private:
    /**
     * @var name
     * @brief The name of the user.
     */
    std::string name;

    /**
     * @var role
     * @brief The role of the user.
     */
    std::string role;

    /**
     * @var email
     * @brief The email address of the user.
     */
    std::string email;

    // Note: Using an array for roles is deprecated and should be replaced with an enum.

public:
    /**
     * @fn User(const std::string& name, const std::string& role, const std::string& email)
     * @brief Constructor for the User class.
     *
     * @param name The name of the user.
     * @param role The role of the user.
     * @param email The email address of the user.
     */
     // Initialize a new user with given information
    User(const std::string& name, const std::string& role, const std::string& email);

    /**
     * @fn std::string getName() const
     * @brief Returns the name of the user.
     *
     * @return A reference to the user's name.
     */
     // Get the name of the user
    std::string getName() const;

    /**
     * @fn std::string getRole() const
     * @brief Returns the role of the user.
     *
     * @return A copy of the user's role.
     */
     // Get the role of the user
    std::string getRole() const;

    /**
     * @fn std::string getEmail() const
     * @brief Returns the email address of the user.
     *
     * @return A reference to the user's email.
     */
     // Get the email address of the user
    std::string getEmail() const;

    /**
     * @fn void setName(const std::string& name)
     * @brief Sets the name of the user.
     *
     * @param name The new name of the user.
     */
     // Set the name of the user to a new value
    void setName(const std::string& name);

    /**
     * @fn void setRole(const std::string& role)
     * @brief Sets the role of the user.
     *
     * @param role The new role of the user.
     */
     // Set the role of the user to a new value
    void setRole(const std::string& role);

    /**
     * @fn void setEmail(const std::string& email)
     * @brief Sets the email address of the user.
     *
     * @param email The new email address of the user.
     */
     // Set the email address of the user to a new value
    void setEmail(const std::string& email);
};