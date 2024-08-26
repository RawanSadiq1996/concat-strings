#include <iostream>
#include <string>

int main() {
    std::string str1, str2, result;

    for (int i = 0; i < 3; ++i) {
        // Prompt user for the first string
        std::cout << "Enter the first string: ";
        std::getline(std::cin, str1);

        // Prompt user for the second string
        std::cout << "Enter the second string: ";
        std::getline(std::cin, str2);

        // Concatenate the two strings
        result = str1 + str2;

        // Print the resulting concatenated string
        std::cout << "Concatenated result: " << result << std::endl;
    }

    return 0;
}



