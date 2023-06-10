//
// Created by Jannik Loth on 10.06.23.
//

#ifndef CPP_LECTURE_STUDENT_HPP
#define CPP_LECTURE_STUDENT_HPP

#include "Person.hpp"

#include <string>


using namespace std;

class Student : public Person
{
public:
    // Default Constructor
    Student()
    {};

    // Overloaded Constructor
    Student(string name, string adress, string email, double avg_grade)
        :   Person(std::move(name), std::move(adress), std::move(email))
        ,   m_avg_grade(avg_grade)
    {};

    // Destructor
    ~Student()
    {};

private:
    double m_avg_grade;
};


#endif //CPP_LECTURE_STUDENT_HPP
