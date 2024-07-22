#include "Jordan_Finn_FuelGauge.h"

// Comment 4:
// Default constructor logic that initializes gallons and passes the same value to the current amount of fuel in the 'car'
FuelGauge::FuelGauge(int gallons) : fuelAmount(gallons) {}

int FuelGauge::getFuel() const { return fuelAmount; }

// Comment 5:
// Logic for increasing the amount of fuel in the car. If the 'car' is below 15 gallons,
// the maximum amount of fuel the 'car' can hold, then this insures that the car will start
// at the maximum amount of fuel when the 'car' object is created.
void FuelGauge::incrementFuel()
{
     if (fuelAmount < 15)
     {
          fuelAmount++;
     }
}

// Comment 6:
// Logic for decreasing the amount of fuel in the 'car'. When the 'car' object performs logic in the Odometer class,
// this will decrease the amount of fuel in the 'car' accordingly depending on the mileage.
void FuelGauge::decrementFuel()
{
     if (fuelAmount > 0)
     {
          fuelAmount--;
     }
}