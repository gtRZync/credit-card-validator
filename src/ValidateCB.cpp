#include "validateCB.hpp"

Luhn_Algorithm::Luhn_Algorithm()
{
    std::cout << "Constructor invoked\n" << std::endl;
}

Luhn_Algorithm::Luhn_Algorithm(std::string CB_number) : cardNumber(CB_number)
{
    std::cout << "Constructor invoked\n" << std::endl;
}

Luhn_Algorithm::~Luhn_Algorithm()
{
    std::cout << "\nDeconstructor invoked" << std::endl;
}

const int Luhn_Algorithm::sumEvenDigits() const
{
    int tempSum = 0;
    int size = this->cardNumber.size();
    for(int i = size - 2 ; i >= 0; i-=2)
    {
        int temp = (this->cardNumber.at(i) - this->CONVERTER) * 2;//! subracting '0' from an ASCII number makes it an int
        tempSum += (temp / 10 % 10) + (temp % 10); // Add both digits if greater than 9
    }
    return tempSum;
}

const int Luhn_Algorithm::sumOddDigits() const
{
    int tempSum = 0;
    int size = this->cardNumber.size();
    for(int i = size - 1 ; i >= 0; i-=2)
    {
            int temp = (this->cardNumber.at(i) - this->CONVERTER);
            tempSum += temp;
        }
    return tempSum;
}

void Luhn_Algorithm::isCardNumberValid()
{
    this->sum_even = sumEvenDigits();
    this->sum_odd = sumOddDigits();
    this->final_sum = this->sum_even + this->sum_odd;
    if(this->final_sum % 10 == 0)
    {
        std::cout << "The Credit Card number : " << this->cardNumber << " is Valid." << std::endl;
    }
    else
    {
        std::cout << "The Credit Card number : " << this->cardNumber << " is not a Valid card number." << std::endl;
    }
}

void Luhn_Algorithm::isCardNumberValid(std::string CB_number)
{
    this->cardNumber = CB_number;
    this->sum_even = sumEvenDigits();
    this->sum_odd = sumOddDigits();
    this->final_sum = this->sum_even + this->sum_odd;
    if(this->final_sum % 10 == 0)
    {
        std::cout << "\nThe Credit Card number : " << this->cardNumber << " is Valid." << std::endl;
    }
    else
    {
        std::cout << "\nThe Credit Card number : " << this->cardNumber << " is not a Valid card number." << std::endl;
    }
}

