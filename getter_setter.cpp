#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Getter for name
    std::string getName() {
        return name;
    }

    // Setter for name
    void setName(const std::string& newName) {
        name = newName;
    }

    // Getter for age
    int getAge() {
        return age;
    }

    // Setter for age with validation
    void setAge(int newAge) {
        if (newAge >= 0 && newAge <= 120) {
            age = newAge;
        } else {
            std::cout << "Invalid age value." << std::endl;
        }
    }
};

int main() {
    Person person;
    person.setName("John");
    person.setAge(30);

    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;

    // Try to set an invalid age
    person.setAge(150);

    return 0;
}
