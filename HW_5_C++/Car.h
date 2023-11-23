#pragma once
#include <iostream>
#include <vector>

using namespace std;

#include "Wheel.h"
class Car :
    public Wheel
{
private:
    vector<Wheel> wheels;
public:
    Car(const vector<Wheel>& wheels) : wheels(wheels) {}

    void move() {
        cout << "Car is moving with wheels of diameter: ";
        for (const auto& wheel : wheels) {
            cout << wheel.getDiameter() << " ";
        }
        cout << "\n";
    }

    void stop() {
        cout << "Car is stopped.\n";
    }

};

