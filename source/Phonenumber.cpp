#include <iostream>
#include "Phonenumber.h"

void PhoneNumber::setNumber(std::string number)
{
    if (is_correct_number(number)) m_number = number;
    else std::cout << "Incorrect number format! Try again." << std::endl;
}

bool PhoneNumber::is_correct_number(std::string number)
{
    if (number.length() == lengthNumber && number[0] == '+' && number[1] == '7') {
        for (int i=2;i < lengthNumber;++i) {
            if (number[i] >= '0' && number[i] <= '9') return true;
            else return false;
        }
    } else return false;
}