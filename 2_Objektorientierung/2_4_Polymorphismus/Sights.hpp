//
// Created by Jannik Loth on 12.06.23.
//

#ifndef CPP_LECTURE_SIGHTS_HPP
#define CPP_LECTURE_SIGHTS_HPP


#include <utility>

#include "Place.hpp"


using namespace std;

// derived class from Place
class Sights : public Place
{
public:
    // Default Constructor
    Sights()
    {};

    // Overloaded Constructor
    Sights(string name, coordinate coordinates, string description)
        :   Place(std::move(name), coordinates)
        ,   m_description(std::move(description))
    {};


    // Destructor
    ~Sights()
    {};


    // getMethod for description
    const string &getMDescription() const;

    // override visit() to print all info
    void visit() const override;


private:
    string m_description;
};


#endif //CPP_LECTURE_SIGHTS_HPP
