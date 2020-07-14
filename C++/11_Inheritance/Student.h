#pragma once

#include "Person.h"

// #include <string>

class Student : public Person
{
private:
    int m_intel; // intelligence

public:
    Student(const std::string & name_in = "No Name", const int & int_in = 0)
        : Person(name_in), m_intel(int_in)
    {}

    void setIntel(const int & int_in)
    {
        m_intel = int_in;
    }
    
    int getIntel()
    {
        return m_intel;
    }

    void study()
    {
        std::cout << getName() << " is studying " << std::endl;
    }

    friend std::ostream& operator << (std::ostream &out, const Student & student)
    {
        out << student.getName() << " " << student.m_intel;
        return out; 
    }
};