#pragma once
#include <iostream>

using namespace std;

class Number
{
public:
    virtual Number* add(const Number& other) const = 0;
    virtual Number* subtract(const Number& other) const = 0;
    virtual Number* multiply(const Number& other) const = 0;
    virtual Number* divide(const Number& other) const = 0;

    virtual void display() const = 0;

    virtual ~Number() {}
};

