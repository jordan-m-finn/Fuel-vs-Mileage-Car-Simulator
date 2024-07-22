#ifndef FUELGAUGE_H
#define FUELGAUGE_H

// Comment 1:
// This is a class made to track the current amount of fuel in a 'car'
class FuelGauge
{
private:
     // Comment 2:
     // This is a private member variable to hold the value representing the amount of fuel in the 'car'
     int fuelAmount;

public:
     // Comment 3:
     // This is the default constructor of the class, FuelGauge, that initializes the 'car' to have 0 'gallons'
     FuelGauge(int gallons = 0);

     int getFuel() const; // function for retrieving the current fuel amount
     void incrementFuel(); // function for adding fuel to the 'car' 
     void decrementFuel(); // function for decreasing the amount of fuel in the 'car'
};

#endif