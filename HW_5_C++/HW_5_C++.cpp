#include <iostream>
#include <vector>

// class
#include "Wheel.h"
#include "Car.h"

using namespace std;

int main()
{
    Wheel frontLeftWheel(16.0, "Summer");
    Wheel frontRightWheel(16.0, "Summer");
    Wheel rearLeftWheel(16.0, "Summer");
    Wheel rearRightWheel(16.0, "Summer");

    vector<Wheel> carWheels = { frontLeftWheel, frontRightWheel, rearLeftWheel, rearRightWheel };

    Car myCar(carWheels);

    myCar.move();
    myCar.stop();

    return 0;
}
