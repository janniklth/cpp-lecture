//
// Created by Jannik Loth on 12.06.23.
//

#ifndef CPP_LECTURE_TOILETS_HPP
#define CPP_LECTURE_TOILETS_HPP


#include "Place.hpp"

class Toilets : public Place
{
public:
    // Default Constructor
    Toilets()
    {};

    // Overloaded Constructor
    Toilets(string name, coordinate coordinates, string smell)
    :   Place(std::move(name), coordinates)
    ,   m_smell(std::move(smell))
    {};


    // Destructor
    ~Toilets()
    {};


    // getMethod for description
    const string &getMSmell() const;

    // override visit() to print all info
    void visit() const override;


private:
    string m_smell;
};


#endif //CPP_LECTURE_TOILETS_HPP
