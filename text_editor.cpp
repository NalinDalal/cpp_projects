#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename;
    std::cout << "Enter the name of the file: ";
    std::cin >> filename;

    std::ifstream file(filename);

    if (!file) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    // Read the contents of the file
    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    std::cout << "File content:" << std::endl;
    std::cout << content << std::endl;

    file.close();

    std::string newText;
    std::cout << "Enter the new text: ";
    std::cin.ignore(); // Ignore the newline character left in the buffer

    std::getline(std::cin, newText);

    // Open the file in write mode and overwrite the content
    std::ofstream outputFile(filename);
    if (!outputFile) {
        std::cerr << "Failed to write to the file." << std::endl;
        return 1;
    }

    outputFile << newText;

    outputFile.close();

    std::cout << "File updated successfully." << std::endl;

    return 0;
}
