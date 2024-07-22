#include "Jordan_Finn_Odometer.h"

// Comment 10:
// Default constructor logic that initiliazes the mileage and fuel amounts accordingly
Odometer::Odometer(int miles, FuelGauge* fuel) : mileage(miles), fuel(fuel) {}

int Odometer::getMileage() const { return mileage; }

// Comment 11:
// Logic for increasing the mileage and adjusting the amount of fuel in the 'car'
void Odometer::incrementMileage()
{
     // Comment 12:
     // This says that the maximum number of miles the car can go with a full tank is
     // 360 miles, a number chosen from the sample runs provided,
     // and to increase the miles based on the value of the fuel amount referenced from the FuelGauge class
     if (mileage < 360)
     {
          mileage++;
          
          // Comment 13:
          // Logic works as so:
          // Decreases the FuelGauge object's current amount of fuel by 1 gallon for every
          // 24 miles traveled AKA 24 mpg
          if (mileage % 24 == 0 && fuel != nullptr)
          {
               fuel->decrementFuel();
          }
     }
     else
     {
          mileage = 0;
     }
}