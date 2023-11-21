#include <iostream>
#include <string>
#include <map>

// Phonebook class
class Phonebook {
private:
    std::map<std::string, std::string> contacts;

public:
    // Add a contact to the phonebook
    void addContact(const std::string& name, const std::string& number) {
        contacts[name] = number;
        std::cout << "Contact added successfully!" << std::endl;
    }

    // Search for a contact in the phonebook
    void searchContact(const std::string& name) {
        auto it = contacts.find(name);
        if (it != contacts.end()) {
            std::cout << "Contact Found: " << it->first << " - " << it->second << std::endl;
        } else {
            std::cout << "Contact not found." << std::endl;
        }
    }

    // Display all contacts in the phonebook
    void displayContacts() {
        if (contacts.empty()) {
            std::cout << "Phonebook is empty." << std::endl;
        } else {
            std::cout << "Phonebook Contacts:" << std::endl;
            for (const auto& contact : contacts) {
                std::cout << contact.first << " - " << contact.second << std::endl;
            }
        }
    }
};

int main() {
    Phonebook phonebook;
    int choice;

    do {
        std::cout << "\nPhonebook Application\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Search Contact\n";
        std::cout << "3. Display Contacts\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name, number;
                std::cout << "Enter contact name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                std::cout << "Enter contact number: ";
                std::getline(std::cin, number);
                phonebook.addContact(name, number);
                break;
            }
            case 2: {
                std::string name;
                std::cout << "Enter contact name to search: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                phonebook.searchContact(name);
                break;
            }
            case 3:
                phonebook.displayContacts();
                break;
            case 4:
                std::cout << "Exiting Phonebook Application. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
