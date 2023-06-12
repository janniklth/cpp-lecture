//
// Created by Jannik Loth on 10.06.23.
//

#include "Student.hpp"

// getMethod for average grade
double Student::getMAvgGrade() const
{
    return m_avg_grade;
}

// method to get the type of a person
string Student::get_type() const
{
    return "Student";
}
