#include "ValidateCB.hpp"

int main(void)
{
    Luhn_Algorithm algo;
/*
    // Predefined valid credit card numbers
    std::string testVisaNumber = "4111111111111111";
    std::string testMasterCardNumber = "5555555555554444";
    std::string testAmexNumber = "378282246310005";
    std::string testDiscoverNumber = "6011111111111117";

    // Predefined invalid credit card numbers
    std::string invalidVisaNumber = "4111111111111112";
    std::string invalidMasterCardNumber = "5555555555554445";
    std::string invalidAmexNumber = "378282246310006";
    std::string invalidDiscoverNumber = "6011111111111118";

    
    std::cout << "\nTesting valid cards:\n";
    algo.isCardNumberValid(testVisaNumber);  // Test Visa
    algo.isCardNumberValid(testMasterCardNumber);  // Test MasterCard
    algo.isCardNumberValid(testAmexNumber);  // Test Amex
    algo.isCardNumberValid(testDiscoverNumber);  // Test Discover
    
    std::cout << "\nTesting invalid cards:\n";
    algo.isCardNumberValid(invalidVisaNumber);  // Test invalid Visa
    algo.isCardNumberValid(invalidMasterCardNumber);  // Test invalid MasterCard
    algo.isCardNumberValid(invalidAmexNumber);  // Test invalid Amex
    algo.isCardNumberValid(invalidDiscoverNumber);  // Test invalid Discover
*/
    std::string userCardNumber;
    std::cout << "\n******************************************" << std::endl;
    std::cout << "Enter a credit card number to validate: ";
    std::cout << "\n******************************************" << std::endl;
    std::cout << ">> ";
    std::cin >> userCardNumber;  
    algo.isCardNumberValid(userCardNumber);  

    return 0;
}
