#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-nodiscard"
//
// Created by Jannik Loth on 12.06.23.
//

#ifndef CPP_LECTURE_PLACE_HPP
#define CPP_LECTURE_PLACE_HPP

#include <string>

using namespace std;

// struct to store coordinates
struct coordinate
{
    int x;
    int y;
};

// base class
class Place
{
public:
    // Default Constructor
    Place()
    {};

    // Overloaded Constructor
    Place(string name, coordinate coordinates)
            : m_name(std::move(name)), m_coordinates(coordinates)
    {}

    // Destructor
    virtual ~Place()
    = default;

    // getMethod for name
    const string &getMName() const;

    // getMethod for coordinates
    const coordinate &getMCoordinates() const;

    // method to visit a place -> print info about that place
    virtual void visit() const;


protected:
    string m_name;
    coordinate m_coordinates;

};


#endif //CPP_LECTURE_PLACE_HPP

#pragma clang diagnostic pop