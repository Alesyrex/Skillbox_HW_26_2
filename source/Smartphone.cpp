#include <iostream>
#include "Smartphone.h"
#include <string>

Smartphone::Smartphone()
{

}

void Smartphone::phonebook_add ()
{
    Phonebook addedContact;
    contactName = addedContact.getName();

    if (contacts.find (contactName) == contacts.end())
    {
        contacts.insert(std::pair<std::string, Phonebook> (contactName,addedContact));
        std::cout << "Contact " << contactName << " added!" << std::endl;
    } else std::cout << "The contact is already in the phone book." << std::endl;
}

void Smartphone::call(std::string subscriber)
{
    if(!contactNumber.is_correct_number(subscriber))
    {
        std::map <std::string, Phonebook>::iterator itf = contacts.find(subscriber);
        if (itf != contacts.end())
        {
            std::cout << subscriber << " called..." << std::endl;
        } else std::cout << "There is no contact \"" << subscriber << "\" in the phone book." << std::endl;
    }
    else
    {
        bool findPhonebook = false;
        for (std::map<std::string, Phonebook>::iterator it = contacts.begin();it != contacts.end();++it)
        {
            if (it->second.getNumber() == subscriber)
            {
                std::cout << it->first << " called..." << std::endl;
                findPhonebook = true;
            }
        }
        if (!findPhonebook) std::cout << subscriber << " called..." << std::endl;
    }
}

void Smartphone::send_sms(std::string addressee)
{
    if(!contactNumber.is_correct_number(addressee))
    {
        std::map <std::string, Phonebook>::iterator itf = contacts.find(addressee);
        if (itf != contacts.end())
        {
            std::cout << "Enter the text of the message for the contact " << addressee << ":" << std::endl;
            write_message();
        } else std::cout << "There is no contact \"" << addressee << "\" in the phone book." << std::endl;
    }
    else
    {
        bool findPhonebook = false;
        for (std::map<std::string, Phonebook>::iterator it = contacts.begin();it != contacts.end();++it)
        {
            if (it->second.getNumber() == addressee)
            {
                std::cout << "Enter the text of the message for the contact " << it->first << ":" << std::endl;
                write_message();
                findPhonebook = true;
            }
        }
        if (!findPhonebook)
        {
            std::cout << "Enter the text of the message for the contact " << addressee << ":" << std::endl;
            write_message();
        }
    }
}

void Smartphone::write_message()
{
    std::cin.ignore();
    std::getline(std::cin,messageText);
}


