// Test 1: theatre ticket discount
#include <iostream>
#include <cstdlib>

int main() {
    // Improved version with proper formatting and best practices
    char response;
    std::cout << "Hi there, would you like to buy a ticket? (y/n): ";
    std::cin >> response;
    
    if(response == 'y' || response == 'Y') {
        char studentResponse;
        std::cout << "Are you a student? (y/n): ";
        std::cin >> studentResponse;
        
        if(studentResponse == 'y' || studentResponse == 'Y') {
           int studentAge;
            do {
                std::cout << "What is your Age? (Type your Age, 18 or below): ";
                std::cin >> studentAge;
                if(studentAge > 18) {
                    std::cout << "Sorry, only ages 18 and below are eligible for student discount.\n";
                }
            } while(studentAge > 18);

            if(studentAge <= 18) {
                std::cout << "Here is your student discount.";
            }
            else if(studentAge > 18) {
                std::cout << "We can't give you a discount.";
            }
        }
                
    }
    else if(response == 'n' || response == 'N') {
        std::cout << "No discount for you.\n";
    }
    else {
        std::cout << "Invalid input.\n";
    }
    
    return EXIT_SUCCESS;
}