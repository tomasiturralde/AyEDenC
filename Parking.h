//
// Created by Tomas on 15/3/2017.
//

#ifndef PROJECT_PARKING_H
#define PROJECT_PARKING_H

#include "Car.h"

typedef struct parking Parking;

struct Parking{
    Car cars[10];
    int maxCapacity;
    int amountOfCars;
};

void parkCar(Parking parking, Car car);
Car removeCar(Parking parking, int spot);
int isCarParked(Parking parking, Car car);
int getCarSpot(Parking parking, Car car);
int isEmpty(Parking parking);
int getAmountOfCars(Parking parking);

#endif //PROJECT_PARKING_H
