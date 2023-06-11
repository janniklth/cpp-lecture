//
// Created by Jannik Loth on 10.06.23.
//

#include <iostream>
#include "MailHandler.hpp"

using namespace std;

// Function to send a message -> print some info about the message and the receiver
void MailHandler::writeMail(Person receiver, string message)
{
    cout << "Send  mail to: " << receiver.getMName() << endl;
    cout << " -> email: " << receiver.getMEmail() << endl;
    cout << " -> adress: " << receiver.getMAdress() << endl;
}