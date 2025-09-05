#include "validateCB.hpp"

Luhn_Algorithm::Luhn_Algorithm() {}

Luhn_Algorithm::Luhn_Algorithm(const std::string& CB_number) : cardNumber(CB_number) {}

Luhn_Algorithm::~Luhn_Algorithm() {}

int Luhn_Algorithm::sumEvenDigits() const
{
    int tempSum = 0;
    int size = cardNumber.size();
    for(int i = size - 2 ; i >= 0; i-=2)
    {
        int temp = (cardNumber.at(i) - CONVERTER) * 2;//! subracting '0' from an ASCII number makes it an int
        tempSum += (temp / 10 % 10) + (temp % 10); //? Add both digits if greater than 9
    }
    return tempSum;
}

int Luhn_Algorithm::sumOddDigits() const
{
    int tempSum = 0;
    int size = cardNumber.size();
    for(int i = size - 1 ; i >= 0; i-=2)
    {
            int temp = (cardNumber.at(i) - this->CONVERTER);
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
        std::cout << "The Credit Card number : " << this->cardNumber << " is Valid.\n";
    }
    else
    {
        std::cout << "The Credit Card number : " << this->cardNumber << " is not a Valid card number.\n";
    }
}

void Luhn_Algorithm::isCardNumberValid(const std::string& CB_number)
{
    cardNumber = CB_number;
    sum_even = sumEvenDigits();
    sum_odd = sumOddDigits();
    final_sum = sum_even + sum_odd;
    if(final_sum % 10 == 0)
    {
        std::cout << "\nThe Credit Card number : " << cardNumber << " is Valid.\n";
    }
    else
    {
        std::cout << "\nThe Credit Card number : " << cardNumber << " is not a Valid card number.\n";
    }
}

