//
// Created by Jannik Loth on 14.06.23.
//

#ifndef CPP_LECTURE_USER_HPP
#define CPP_LECTURE_USER_HPP

#include <string>

using namespace std;



class User
{
public:
    // default constructor
    User()
    {};

    // overloaded constructor
    User(string name)
        : m_name(name)
        , m_id(m_count++)
    {};

    // destructor
    ~User()
    {};

    // method to print id
    void printId();

private:
    string m_name;
    const int m_id;

    static int m_count;

};


#endif //CPP_LECTURE_USER_HPP
