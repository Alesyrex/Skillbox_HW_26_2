#pragma once
#ifndef SKILLBOX_HW_26_2_PHONENUMBER_H
#define SKILLBOX_HW_26_2_PHONENUMBER_H

class PhoneNumber
{
private:
    const int lengthNumber = 12;
    std::string m_number;
public:
    void setNumber (std::string number);
    bool is_correct_number(std::string number);
};

#endif //SKILLBOX_HW_26_2_PHONENUMBER_H
