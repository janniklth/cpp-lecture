#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


class Vehicle
{
public:
    // Default Constructor
    Vehicle()
        : m_name(),
        m_position(),
        m_consumption(),
        m_fuel_tank(),
        m_maximum_fuel(),
        m_consumed()
    {}

    // Overloaded Constructor
    Vehicle(string name, double position, double consumption)
        : m_name(name), m_position(position),
        m_consumption(consumption),
        m_maximum_fuel(50),
        m_consumed(0)
    {
        m_fuel_tank = m_maximum_fuel;
    }


    // method to move the vehicle to a new absolute position when it has enough fuel
    void move_absolute(double newPosition)
    {
        if (get_reach() >= abs(m_position - newPosition))
        {
            cout << m_name << " moved " << abs(m_position - newPosition) << "km to its new position x: " << newPosition << endl;
            m_consumed += m_consumption * abs(m_position - newPosition) / 100;
            m_position += newPosition;
            m_fuel_tank -= m_consumed;
        }
        else
        {
            cout << "Not enough reach, " << m_name << " cannot be moved" << endl;
        }
    }

    // method to move the vehicle relative to its position when it has enough fuel
    void move_relative(double distance)
    {
        if (get_reach() >= distance)
        {
            cout << m_name << " moved " << distance << "km to its new position x: " << m_position << endl;
            m_consumed += m_consumption * distance / 100;
            m_position += distance;
            m_fuel_tank -= m_consumed;
        }
        else
        {
            cout << "Not enough reach, " << m_name << " cannot be moved" << endl;
        }
    }

    // method to refuel the vehicle
    void refuel(double petrol)
    {
        if (m_fuel_tank + petrol <= m_maximum_fuel)
        {
            m_fuel_tank += petrol;
            cout << "The " << m_name << " filled up to " << m_fuel_tank << endl;
        }
        else
        {
            cout << "The " << m_name << " cannot be refueled because its maximum fuel capacity" << endl;
        }
    }

    // get method for consumed fuel
    double getConsumed()
    {
        return m_consumed;
    }

    // get method for name
    string getName()
    {
        return m_name;
    }


private:
    string m_name;
    double m_position;
    double m_consumption;
    double m_fuel_tank;
    double m_maximum_fuel;
    double m_consumed;

    // private method to return the actual reach of the vehicle
    double get_reach()
    {
        return m_fuel_tank/m_consumption * 100;
    }
};



// main function
int main()
{
    // initialise a cars
    Vehicle car1("Porsche", 0, 10);
    Vehicle car2("Mercedes", 0, 20);

    // drive around
    cout << "- - - - Cars moving - - - -" << endl;
    car1.move_absolute(200);
    car1.move_absolute(100);
    car1.move_absolute(600);
    cout << endl;

    // get consumed fuel of the cars
    cout << "- - - - - Consumed fuel - - - - -" << endl;
    cout << car1.getName() << " consumed " << car1.getConsumed() << " liter" << endl;
    cout << car2.getName() << " consumed " << car2.getConsumed() << " liter" << endl;
    cout << endl;

    // refuel the cars
    cout << "- - - - Refueling - - - -" << endl;
    car1.refuel(31);
    car2.refuel(10);



    return 0;
}