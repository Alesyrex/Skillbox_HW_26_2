#include <iostream>
#include "Smartphone.h"

static const int number = 4;

bool is_correct_answer (std::string answer, std::string* actions) {

    for (int i=0;i < number;++i) {
        if (answer == actions[i]) return true;
    }
    return false;
}

int main() {

    std::string actions[] = {"add","call","sms","exit"};
    std::string answer;
    Smartphone nokia;

    do {
        std::cout << "\nInput one from the list of commands:" << std::endl;
        for (int i=0;i < number;++i) {
            std::cout << "-" << actions[i] << std::endl;
        }
        std::cout << ">";

        do {
            std::cin >> answer;
            if (!(is_correct_answer(answer,actions))) std::cout << "Incorrect!Repeat.\n>";
        } while (!(is_correct_answer(answer,actions)));

        if (answer == actions[0]) nokia.phonebook_add();
        else if (answer == actions[1]) {
            std::string calledSubscriber;
            std::cout << "Enter the contact name or phone number to call:";
            std::cin >> calledSubscriber;
            nokia.call(calledSubscriber);
        }
        else if (answer == actions[2]) {
            std::string addressee;
            std::cout << "Enter the contact name or phone number to send sms:";
            std::cin >> addressee;
            nokia.send_sms(addressee);
        }
    } while (answer != "exit");
    return 0;

}
