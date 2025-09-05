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
        int sumEvenDigits() const;
        
        int sumOddDigits() const;
    public:
        void isCardNumberValid();

        void isCardNumberValid(const std::string& CB_number);
    public:
        Luhn_Algorithm();

        Luhn_Algorithm(const std::string& CB_number);

        virtual ~Luhn_Algorithm();
};

#endif