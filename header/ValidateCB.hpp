#ifndef VALIDATE_CB
#define VALIDATE_CB
#include <iostream>

class Luhn_Algorithm
{
    private:
        int sum_even;
        int sum_odd;
        int final_sum;
        std::string cardNumber;
        const char CONVERTER = '0';
    private:
        virtual const int sumEvenDigits() const;
        virtual const int sumOddDigits() const;
    public:
        virtual void isCardNumberValid();
        virtual void isCardNumberValid(std::string CB_number);
    public:
        Luhn_Algorithm();
        Luhn_Algorithm(std::string CB_number);
        virtual ~Luhn_Algorithm();
};

#endif