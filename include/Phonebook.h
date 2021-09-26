#pragma once
#include "Phonenumber.h"
#ifndef SKILLBOX_HW_26_2_PHONEBOOK_H
#define SKILLBOX_HW_26_2_PHONEBOOK_H

class Phonebook
{
private:
    std::string m_name;
    std::string number;
    PhoneNumber correctNumber;
public:
    Phonebook();
    std::string getName () {return m_name;}
    std::string getNumber () {return number;}
};

#endif //SKILLBOX_HW_26_2_PHONEBOOK_H
