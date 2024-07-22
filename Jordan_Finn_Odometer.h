#ifndef ODOMETER_H
#define ODOMETER_H

#include "Jordan_Finn_FuelGauge.h"

// Comment 7:
// This is a class made to, based on the amount of fuel in the 'car' object, track the mileage.
class Odometer
{
private:
     // Comment 8:
     // The following private member variables are to represent mileage and the amount of fuel in the 'car'
     // referenced from the FuelGauge class
     int mileage;
     FuelGauge* fuel;

public:
     // Comment 9:
     // This is the default constructor for the odometer that initializes both the mileage and amount of fuel
     // in the 'car' to zero.
     Odometer(int miles = 0, FuelGauge* f = nullptr);

     int getMileage() const; // function for retrieving the current mileage in the 'car'
     void incrementMileage(); // function for incrementing the mileage in the 'car'
};

#endif