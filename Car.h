//
// Created by Tomas on 15/3/2017.
//

#ifndef PROJECT_CAR_H
#define PROJECT_CAR_H

typedef struct car Car;

struct Car{
    char licensePlate[10];
    char model[10];
    char color[10];
};

int equals(Car car1, Car car2);

#endif //PROJECT_CAR_H
