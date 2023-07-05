#include <iostream>
#include <map>
#include <string>

using namespace std;

// User structure to store user information
struct User {
    string username;
    string password;
};

// Database to store registered users
map<string, User> database;

// Function to register a new user
void registerUser() {
    User user;
    cout << "Registration\n";
    cout << "Username: ";
    cin >> user.username;

    // Check if the username already exists
    if (database.find(user.username) != database.end()) {
        cout << "Username already exists. Please choose a different username.\n";
        return;
    }

    cout << "Password: ";
    cin >> user.password;

    // Store the user in the database
    database[user.username] = user;

    cout << "Registration successful!\n";
}

// Function to authenticate a user during login
void login() {
    string username, password;
    cout << "Login\n";
    cout << "Username: ";
    cin >> username;

    // Check if the username exists in the database
    if (database.find(username) == database.end()) {
        cout << "Invalid username. Please register or try again.\n";
        return;
    }

    cout << "Password: ";
    cin >> password;

    // Check if the provided password matches the stored password
    if (database[username].password == password) {
        cout << "Login successful!\n";
    } else {
        cout << "Incorrect password. Please try again.\n";
    }
}

int main() {
    int choice;
    cout << "Welcome to the Login and Registration System\n";

    while (true) {
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                login();
                break;
            case 3:
                cout << "Exiting the program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
