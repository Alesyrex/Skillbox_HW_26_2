#pragma once
#include <map>
#include "Phonebook.h"
#ifndef SKILLBOX_HW_26_2_SMARTPHONE_H
#define SKILLBOX_HW_26_2_SMARTPHONE_H

class Smartphone
{
private:
    std::map <std::string,Phonebook> contacts;
    std::string contactName;
    std::string messageText;
    PhoneNumber contactNumber;
public:
    Smartphone();
    void phonebook_add ();
    void call (std::string subscriber);
    void send_sms (std::string addressee);
    void write_message ();
};

#endif //SKILLBOX_HW_26_2_SMARTPHONE_H
