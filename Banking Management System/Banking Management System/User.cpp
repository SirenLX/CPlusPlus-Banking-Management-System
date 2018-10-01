#include "User.h"
#include <iostream>
#include <vector>

// ----- Getters ----- //
// Function to get the userID of the user
int User::GetUserID() { return userID; }

// Function to get the username of the user
std::string User::GetUsername() { return username; }

// Function to get the account number of the user
int User::GetAccountNumber() { return accountNumber; }

// Function to get the account balance of the user
float User::GetAccountBalance() { return accountBalance; }

// Function to get the user's first name
std::string User::GetUserFirstName() { return firstName; }

// Function to get the user's last name
std::string User::GetUserLastName() { return lastName; }

// Function to get the user's middle name
std::string User::GetUserMiddleName() { return middleName; }

// Function to get the user's hashed password
std::string User::GetUserHashedPassword() { return hashedPassword; }


// ----- Setters ----- //
// Function to set the userID of the user
void User::SetUserID(int userIDInput) { userID = userIDInput; }

// Function to set the username of the user
void User::SetUsername(std::string usernameInput) { username = usernameInput; }

// Function to set the account number of the user
void User::SetAccountNumber(int accountNumberInput) { accountNumber = accountNumberInput; }

// Function to set the account balance of the user
void User::SetAccountBalance(float accountBalanceInput) { accountBalance = accountBalanceInput; }

// Function to set the user's first name
void User::SetUserFirstName(std::string firstNameInput) { firstName = firstNameInput; }

// Function to set the user's last name
void User::SetUserLastName(std::string lastNameInput) { lastName = lastNameInput; }

// Function to set the user's middle name
void User::SetUserMiddleName(std::string middleNameInput) { middleName = middleNameInput; }

// Function to set the user's hashed password
void User::SetUserHashedPassword(std::string hashedPasswordInput) { hashedPassword = hashedPasswordInput; }


// ----- Main Functions and Methods ----- //
// Function to add amount to the user's account balance
void User::AddAccountBalance(int amount) { accountBalance += amount; }

// Function to deduct amount from the user's account balance
void User::DeductAccountBalance(int amount) { accountBalance -= amount; }