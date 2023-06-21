//
// Created by Jannik Loth on 14.06.23.
//

#include <iostream>
#include "User.hpp"

using namespace std;


// initialise static member count
int User::m_count = 1;


// method to print a users id
void User::printId()
{
    cout << "Name: " << m_name << "  ID: " << m_id << endl;
}
