#include <iostream>

// Main function
int main() {
    // Declare and initialize variables of different data types
    int pencils = 10;
    float price = 2.75;
    // TODO: Initialize a character variable representing the classroom section
    char section = 'B';
    bool hasEraser = true;

    // TODO: Print variables to the console, so it reads "Section: B has 10 pencils each at $2.75. Eraser included: true"]
    std::cout << "Section: " << section << " has " << pencils << " pencils each at $" << price << ". Eraser included: " << std::boolalpha << hasEraser << std::endl;
    return 0;
}