#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "A";
    }

    A(int i)
    {
        std::cout << "X" << i;
    }
};

class B
{
public:
    B()
    : m_a1()
    , m_a2(2)
    {
        std::cout << "B";
    }

private:
    A m_a1;
    A m_a2;
};

int main()
{
    B();
    return 0;
}