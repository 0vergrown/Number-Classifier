#include <iostream>

int main() {
    // Variable to store the user input
    int number;

    // Prompt the user for input
    std::cout << "Please enter a number: ";
    std::cin >> number;

    // Output the entered number
    std::cout << "You entered: " << number << std::endl;

    // Determine if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}
