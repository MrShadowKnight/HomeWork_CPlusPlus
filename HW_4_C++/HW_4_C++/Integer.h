#pragma once
#include <iostream>
#include "Number.h"

using namespace std;

class Integer :
    public Number
{
private:
    int value;

public:
    Integer(int val) : value(val) {}

    virtual Number* add(const Number& other) const override {
        const Integer& otherInt = dynamic_cast<const Integer&>(other);
        return new Integer(value + otherInt.value);
    }

    virtual Number* subtract(const Number& other) const override {
        const Integer& otherInt = dynamic_cast<const Integer&>(other);
        return new Integer(value - otherInt.value);
    }

    virtual Number* multiply(const Number& other) const override {
        const Integer& otherInt = dynamic_cast<const Integer&>(other);
        return new Integer(value * otherInt.value);
    }

    virtual Number* divide(const Number& other) const override {
        const Integer& otherInt = dynamic_cast<const Integer&>(other);
        if (otherInt.value != 0) {
            return new Integer(value / otherInt.value);
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

