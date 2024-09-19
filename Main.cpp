#include <iostream>

int main() {
    // Declare two integer variables
    int a, b;
    
    // Prompt user for input
    std::cout << "Enter two numbers to swap 15:" << std::endl;
    
    // Read input from user
    std::cout << "Enter the first number 1: ";
    std::cin >> a;
    
    std::cout << "Enter the second number 5: ";
    std::cin >> b;
    
    // Output the numbers before swapping
    std::cout << "Before swapping: " << std::endl;
    std::cout << "First number1: " << a << std::endl;
    std::cout << "Second number5: " << b << std::endl;
    
    // Swapping using a temporary variable
    int temp = a;
    a = b;
    b = temp;
    
    // Output the numbers after swapping
    std::cout << "After swapping: " << std::endl;
    std::cout << "First number 1: " << a << std::endl;
    std::cout << "Second number5: " << b << std::endl;
    
    return 0;
}
