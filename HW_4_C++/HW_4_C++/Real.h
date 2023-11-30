#pragma once
#include <iostream>
#include "Number.h"

using namespace std;

class Integer :
    public Number
{
private:
    double value;

public:
    Real(double val) : value(val) {}

    virtual Number* add(const Number& other) const override {
        const Real& otherReal = dynamic_cast<const Real&>(other);
        return new Real(value + otherReal.value);
    }

    virtual Number* subtract(const Number& other) const override {
        const Real& otherReal = dynamic_cast<const Real&>(other);
        return new Real(value - otherReal.value);
    }

    virtual Number* multiply(const Number& other) const override {
        const Real& otherReal = dynamic_cast<const Real&>(other);
        return new Real(value * otherReal.value);
    }

    virtual Number* divide(const Number& other) const override {
        const Real& otherReal = dynamic_cast<const Real&>(other);
        if (otherReal.value != 0.0) {
            return new Real(value / otherReal.value);
        }
        else {
            cerr << "Error: Division by zero." << endl;
            return nullptr;
        }
    }

    virtual void display() const override {
        cout << value;
    }
};

