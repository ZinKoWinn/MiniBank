//
// Created by Zin Ko Winn on 22/11/2022.
//

#ifndef MINIBANK_BANK_H
#define MINIBANK_BANK_H

#include "iostream"

using namespace std;

struct User {
    string userName;
    string password;
    string phoneNumber;
    string email;
};

namespace Bank {

    class KBank {
    public:
        void mainMenu();

        void adminMenu();

        void userMenu();

        void registration();

        void login();
    };

}
#endif //MINIBANK_BANK_H
