#include <iostream>
#include <string>
#include <unordered_map>

// Class representing a password manager
class PasswordManager {
private:
    std::unordered_map<std::string, std::string> passwords;

public:
    void addPassword(const std::string& website, const std::string& password) {
        passwords[website] = password;
    }

    std::string getPassword(const std::string& website) {
        if (passwords.find(website) != passwords.end()) {
            return passwords[website];
        } else {
            return "";
        }
    }

    void removePassword(const std::string& website) {
        if (passwords.find(website) != passwords.end()) {
            passwords.erase(website);
            std::cout << "Password for " << website << " has been removed." << std::endl;
        } else {
            std::cout << "No password found for " << website << "." << std::endl;
        }
    }
};

int main() {
    PasswordManager passwordManager;

    // Adding passwords
    passwordManager.addPassword("example.com", "p@ssw0rd");
    passwordManager.addPassword("google.com", "myPassword123");
    passwordManager.addPassword("facebook.com", "s3cretP@ss");

    // Retrieving passwords
    std::string password = passwordManager.getPassword("example.com");
    if (!password.empty()) {
        std::cout << "Password for example.com: " << password << std::endl;
    } else {
        std::cout << "No password found for example.com." << std::endl;
    }

    password = passwordManager.getPassword("yahoo.com");
    if (!password.empty()) {
        std::cout << "Password for yahoo.com: " << password << std::endl;
    } else {
        std::cout << "No password found for yahoo.com." << std::endl;
    }

    // Removing a password
    passwordManager.removePassword("google.com");

    return 0;
}
