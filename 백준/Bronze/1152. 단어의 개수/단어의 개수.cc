#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input;

    std::getline(std::cin, input);

    std::stringstream ss(input);
    std::string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    std::cout << count << std::endl; 

    return 0;
}
