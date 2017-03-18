//
// Created by Tomas on 15/3/2017.
//

#include "Parking.h"

void parkCar(Parking parking, Car car){
    if(parking.amountOfCars < parking.maxCapacity){
        parking.cars[parking.amountOfCars] = car;
        parking.amountOfCars++;
    }
}

Car removeCar(Parking parking, int spot){
    if (parking.amountOfCars > spot){
        Car result = parking.cars[spot];
        for (int i = spot; i < parking.amountOfCars - 1; ++i) {
            parking.cars[i] = parking.cars[i + 1];
        }
        return result;
    }
    exit(2);
}

int isCarParked(Parking parking, Car car){
    if( getCarSpot(parking, car) == -1) return 0;
    return 1;
}

int getCarSpot(Parking parking, Car car){
    for (int i = 0; i < parking.amountOfCars; ++i) {
        if(equals(parking.cars[i], car) == 1){
            return i;
        }
    }
    return -1;
}

int isEmpty(Parking parking){
    if(parking.size == 0) return 1;
    return 0;
}

int getAmountOfCars(Parking parking){
    return parking.amountOfCars;
}

