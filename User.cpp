#include "User.h"

/**
 * @fn User::User(const std::string& name, const std::string& role, const std::string& email)
 * @brief Constructor for the User class.
 *
 * Initializes the user's properties (name, role, and email) with the provided values.
 *
 * @param name The name of the user.
 * @param role The role of the user.
 * @param email The email address of the user.
 */
User::User(const std::string& name, const std::string& role, const std::string& email) {
    // Assign the provided values to the class member variables
    this->name = name;
    this->role = role;
    this->email = email;
}

/**
 * @fn std::string User::getName() const
 * @brief Returns a copy of the user's name.
 *
 * This function is marked as const because it does not modify the object's state.
 *
 * @return A reference to the user's name.
 */
std::string User::getName() const {
    return name; // Directly return the class member variable
}

/**
 * @fn std::string User::getRole() const
 * @brief Returns a copy of the user's role.
 *
 * This function is marked as const because it does not modify the object's state.
 *
 * @return A reference to the user's role.
 */
std::string User::getRole() const {
    return role; // Directly return the class member variable
}

/**
 * @fn std::string User::getEmail() const
 * @brief Returns a copy of the user's email address.
 *
 * This function is marked as const because it does not modify the object's state.
 *
 * @return A reference to the user's email address.
 */
std::string User::getEmail() const {
    return email; // Directly return the class member variable
}

/**
 * @fn void User::setName(const std::string& newName)
 * @brief Sets a new value for the user's name.
 *
 * Modifies the object's state by reassigning the class member variable to the provided value.
 *
 * @param newName The new name of the user.
 */
void User::setName(const std::string& newName) {
    // Reassign the class member variable with the provided value
    name = newName;
}

/**
 * @fn void User::setRole(const std::string& newRole)
 * @brief Sets a new value for the user's role.
 *
 * Modifies the object's state by reassigning the class member variable to the provided value.
 *
 * @param newRole The new role of the user.
 */
void User::setRole(const std::string& newRole) {
    // Reassign the class member variable with the provided value
    role = newRole;
}

/**
 * @fn void User::setEmail(const std::string& newEmail)
 * @brief Sets a new value for the user's email address.
 *
 * Modifies the object's state by reassigning the class member variable to the provided value.
 *
 * @param newEmail The new email address of the user.
 */
void User::setEmail(const std::string& newEmail) {
    // Reassign the class member variable with the provided value
    email = newEmail;
}