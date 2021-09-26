#include <iostream>
#include "Phonebook.h"

Phonebook::Phonebook()
{
    std::cout << "Enter name contact:";
    std::cin >> m_name;
    do
    {
        std::cout << "Enter phone number contact in format +7**********:";
        std::cin >> number;
        correctNumber.setNumber(number);

    } while(!correctNumber.is_correct_number(number));
}

