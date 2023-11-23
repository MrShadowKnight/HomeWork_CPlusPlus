#pragma once
#include <iostream>

using namespace std;

class Wheel
{
private:
    double diameter;
    string tireType;
public:
    Wheel(double diameter, const std::string& tireType) : diameter(diameter), tireType(tireType) {}

    double getDiameter() const {
        return diameter;
    }

    const string& getTireType() const {
        return tireType;
    }
};

