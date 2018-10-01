#pragma once
#include <iostream>
#include <string>

class User
{
public:

	// ----- Getters and Setters ----- //
	// Getters
	// Function to get the userID of the user
	int GetUserID();
	// Function to get the username of the user
	std::string GetUsername();
	// Function to get the account number of the user
	int GetAccountNumber();
	// Function to get the account balance of the user
	float GetAccountBalance();
	// Function to get the user's first name
	std::string GetUserFirstName();
	// Function to get the user's last name
	std::string GetUserLastName();
	// Function to get the user's middle name
	std::string GetUserMiddleName();
	// Function to get the user's hashed password
	std::string GetUserHashedPassword();

	// Setters
	// Function to set the UserID of the user
	void SetUserID(int userIDInput);
	// Function to set the username of the user
	void SetUsername(std::string usernameInput);
	// Function to set the account number of the user
	void SetAccountNumber(int accountNumberInput);
	// Function to set the account balance of the user
	void SetAccountBalance(float accountBalanceInput);
	// Function to set the user's first name
	void SetUserFirstName(std::string firstNameInput);
	// Function to set the user's last name
	void SetUserLastName(std::string lastNameInput);
	// Function to set the user's middle name
	void SetUserMiddleName(std::string middleNameInput);
	// Function to set the user's hashed password
	void SetUserHashedPassword(std::string hashedPasswordInput);

	// Main Functions and Methods
	// Function to add money to the user's account
	void AddAccountBalance(int amount);
	// Function to deduct money from the user's account;
	void DeductAccountBalance(int amount);


protected:

private:

	// User details that will be stored by the system
	int userID;
	std::string username;
	int accountNumber;
	float accountBalance;
	std::string firstName;
	std::string lastName;
	std::string middleName;
	std::string hashedPassword;

};